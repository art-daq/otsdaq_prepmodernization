/*  Library for charting 2D Line graphs via canvas
 *	
 * 	- Supports a live updates using a "phosperous" style display with variable persistance
 * 	- based on https://weblogs.asp.net/dwahlin/creating-a-line-chart-using-the-html-5-canvas
 * 	  with modifications to support more functionality 
 * 
 * 
 * 
 * 
 */


var LineChart = function() {
  var dataCtx; //2D Context for the data itself
  var gridCtx; //2D Context for the grid/labels
  var gridCanvas
  var dataCanvas
  var margins = {top: 50, bottom: 50, left: 50, right: 50}; //margins
  var chartHeight, chartWidth; // width of the whole canvas area
  var useGrid = true;
  var useDataLabels = false;
  var useAxisLabels = true;
  var usePersistanceDisplay = false; //bool vals to select what features to use
  var fadeGblAlpha = 0.05; //Global Alpha value for fadeout function 
  var timeoutVal = 150; //Timeout val uses for fadeout function
  var yMaxPx, xMaxPx; // area of the chart itself, excluding axis/margin etc. 
  var data; // 
  var maxYVal, maxXVal;//"Size" of the internal chart area
  var xInc, yInc; //Increments for data increment labels
  var xRatio, yRatio;
  var gridStrokeStyle = "lightgray";
  var dataStrokeStyle = "black";
  var dataLineWidth = 2;

var render = function(dataId,gridId,inData){
  data = inData;
  if(data.margins != null){margins=data.margins};
  if(data.useGrid != null){useGrid=data.useGrid};
  if(data.useDataLabels != null){useDataLabels=data.useDataLabels};
  if(data.useAxisLabels != null){useAxisLabels=data.useAxisLabels};
  if(data.usePersistanceDisplay != null){useAxisLabels=data.useAxisLabels};
  if(data.fadeGblAlpha != null){fadeGblAlpha=data.fadeGblAlpha};
  if(data.timeoutVal != null){timeoutVal=data.timeoutVal};
  if(data.gridStrokeStyle != null){useAxisLabels=data.gridStrokeStyle};
  if(data.dataStrokeStyle != null){dataStrokeStyle=data.dataStrokeStyle};
  if(data.dataLineWidth != null){dataLineWidth=data.dataLineWidth};

  
  gridCanvas = document.getElementById(gridId);
  gridCtx = gridCanvas.getContext("2d");
  dataCanvas = document.getElementById(dataId);
  dataCtx = dataCanvas.getContext("2d");
  
  xMaxPx = data.chartWidth;
  chartWidth = xMaxPx + (margins.left + margins.right);
  yMaxPx = data.chartHeight;
  chartHeight = yMaxPx + (margins.top + margins.bottom);
  
  maxXVal = getMaxXVal();
  maxYVal = getMaxYVal();
  
  yRatio = yMaxPx/maxYVal;
  xRatio = xMaxPx/maxXVal;
  
  dataCanvas.style.height = dataCanvas.height = chartHeight*window.devicePixelRatio;
  dataCanvas.style.width = dataCanvas.width = chartWidth*window.devicePixelRatio;
  dataCtx.setTransform(window.devicePixelRatio,0,0,window.devicePixelRatio,0,0);
  
  gridCanvas.style.height = gridCanvas.height = chartHeight*window.devicePixelRatio;
  gridCanvas.style.width = gridCanvas.width = chartWidth*window.devicePixelRatio;
  gridCtx.setTransform(window.devicePixelRatio,0,0,window.devicePixelRatio,0,0);
  
  //console.log(window.devicePixelRatio);
  
  
  renderChart();
};

var renderChart = function () { //Render the elements of the chart that use selects along with the data
  //render things if they're set to be used 
  if (data.useGrid == true){renderGrid()}; 
  if (data.useDataLabels == true){renderDataLabels()}; //Data labels on the points themself
  if (data.useAxisLabels == true){renderAxisLabels()}; //Axis titles/labels
  
  renderData(data.dataPoints);
  /*
  if (data.renderTypes == undefined || data.renderTypes == null) {data.renderTypes = [renderType.lines]}
  for (var i = 0; i < data.renderTypes.length; i++){
      renderData(data.renderTypes[i]);
  }
  */
};

var renderGrid = function () {
  //draw the grid
  hDivs = data.HorizontalDivs;
  vDivs = data.VeticalDivs;

  var vDivSpacing = (xMaxPx/vDivs); 
  var hDivSpacing = (yMaxPx/hDivs);

    gridCtx.beginPath();
    gridCtx.lineWidth=1;
  for (var x =margins.left; x <= xMaxPx + margins.left; x += vDivSpacing){ //draw vertical lines
    gridCtx.moveTo(0.5 + x, margins.top);
    gridCtx.lineTo(0.5 + x, yMaxPx+margins.top);
  }
  
  for (var x=margins.top; x <= yMaxPx+margins.top; x += hDivSpacing){ //draw horizontal lines
    gridCtx.moveTo(margins.left, 0.5 + x);
    gridCtx.lineTo(xMaxPx+margins.left, 0.5 + x);    
  }
  gridCtx.strokeStyle = gridStrokeStyle;
  gridCtx.stroke();
  gridCtx.closePath();
  
};  


var renderDataLabels = function () {
  return;
};

var renderAxisLabels = function () {
  var labelFont = (data.labelFont != null)?data.labelFont:'20pt Arial';
  gridCtx.font = labelFont;
  gridCtx.textAlign = "center";
  
  //Render the Title
  if(data.title != "" && data.title != null){
  var size = gridCtx.measureText(data.title);
  gridCtx.fillText(data.title, (chartWidth/2), (margins.top/1.5));
  }
  
  //X-Axis Label
  if(data.xLabel != "" && data.xLabel != null){
  console.log(data.xLabel);
  size = gridCtx.measureText(data.xLabel);
  gridCtx.fillText(data.xLabel, (chartWidth/2), (yMaxPx+margins.top+margins.bottom/1.5))//, margins.left + (xMaxPx/2)-(size.width/2), yMaxPx + (margins.bottom/1.5));
  }
  
  //Y-Axis Label - save the canvas, rotate it to render text for the Y Axis label, then resore it once text rendered
  if(data.yLabel != "" && data.yLabel != null){
  gridCtx.save();
  gridCtx.rotate(-Math.PI / 2);
  gridCtx.font = labelFont;
  gridCtx.fillText(data.yLabel, (yMaxPx / 2) * -1, margins.left / 1.5);
  gridCtx.restore();  
  }
  
}

var renderData = function (dataPts) {
  var lastPt = {x: 0, y: 0};
  var thisPt = {x: 0, y: 0};

    
  dataCtx.beginPath(); 
  for(let pt of dataPts){
   
    thisPt.x = ((pt.x) * xRatio) + margins.left;
    thisPt.y = ((maxYVal - pt.y) * yRatio) + margins.top;
    
    
   if (!(lastPt.x == 0) && !(lastPt.y == 0)){

     dataCtx.moveTo(lastPt.x+0.5,lastPt.y+0.5);
     dataCtx.lineTo(thisPt.x+0.5,thisPt.y+0.5);
    }
    lastPt.x = thisPt.x;
    lastPt.y = thisPt.y;
    
  }  
     dataCtx.lineJoin = "round"; 
     dataCtx.lineCap = "round";
     dataCtx.strokeStyle = dataStrokeStyle;
     dataCtx.lineWidth = dataLineWidth;
     dataCtx.stroke();
     dataCtx.closePath();
  
};

var updateData = function (dataPts){
  if(!usePersistanceDisplay){
    dataCtx.clearRect(0, 0, chartWidth, chartHeight);
  }
  renderData(dataPts);
}

var enableFadeOut = function () {
  usePersistanceDisplay = true;
  fadeOut();
};

var disableFadeOut = function () {
  usePersistanceDisplay = false;
};

var fadeOut = function () {
  //https://stackoverflow.com/questions/27082720/html5-apply-transparency-to-canvas-after-drawing-through-javascript
  if(usePersistanceDisplay == true){
    dataCtx.save();
    dataCtx.globalAlpha = fadeGblAlpha;
    dataCtx.globalCompositeOperation='destination-out'; 
    dataCtx.fillStyle= '#FFF';
    dataCtx.fillRect(0,0,dataCanvas.width, dataCanvas.height);    
    dataCtx.restore();   
    
    return setTimeout(function() {
      fadeOut();
      },timeoutVal);//Tune timeout value (in ms) to adjust rate of fade out, lower will update more often and fade faster
    }
  else{
    return;
  }
  };

var getMaxXVal = function () {
  var maxVal = 0;
  for (let pt of data.dataPoints){
   if (pt.x > maxVal){
     maxVal = pt.x     
    }
  } 
  return maxVal
}
  
var getMaxYVal = function () {
  var maxVal = 0;
  for (let pt of data.dataPoints){
    if (pt.y > maxVal){
     maxVal = pt.y
    }
  } 
  return maxVal
}  
  
  
  return{
    render: render,
    enableFadeOut: enableFadeOut,
    disableFadeOut: enableFadeOut,
    updateData: updateData
  };  
  
};

