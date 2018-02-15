/*  Library for charting 2D Line graphs via canvas
 *	
 * 	- Supports a live updates using a "phosperous" style display with variable persistance
 * 	- based on https://weblogs.asp.net/dwahlin/creating-a-line-chart-using-the-html-5-canvas
 * 	  with modifications to support more functionality 
 * 
 * 
 *      "0" on X-Axis should be min X Value, regardless of what that value is
 * 	Need to allow for Negitive Y vals, have to change data rendering and increment labeling
 * 		- most likely will have to find y vals above and below max and min y vals that are divisible by the number of hdivs cleanly, then graph and draw the grid/incr labels based on that
 * 			- current way is close, but last (topmost) data pt is rendering wrong ( off by lower bound), and need to find a way to ensure that "0" is one of the labels
 * 
 */


var LineChart = function() {
  var dataCtx; //2D Context for the data itself
  var gridCtx; //2D Context for the grid/labels
  var gridCanvas
  var dataCanvas
  var margins = {top: 50, bottom: 50, left: 75, right: 50}; //margins
  var chartHeight, chartWidth; // width of the whole canvas area
  var useGrid = true;
  var useDataLabels = false;
  var useAxisLabels = true;
  var usePersistanceDisplay = false; //bool vals to select what features to use
  var useIncrLabels = true;
  var fadeGblAlpha = 0.05; //Global Alpha value for fadeout function 
  var timeoutVal = 150; //Timeout val uses for fadeout function
  var yMaxPx, xMaxPx; // area of the chart itself, excluding axis/margin etc. 
  var data; // 
  var maxYVal, maxXVal;//max X/Y Values of the data
  var minXVal, minYVal;//min X/Y Values of the data
  var xInc, yInc; //Increments for data increment labels
  var xRatio, yRatio;
  var hDivs, vDivs;
  var gridStrokeStyle = "lightgray";
  var dataStrokeStyle = "black";
  var dataLineWidth = 2;
  var ptArray = [];

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
  if(data.HorizontalDivs != null){hDivs=data.HorizontalDivs}
    else{hDivs = data.dataPoints.length-1};
  if(data.VerticalDivs != null){vDivs=data.VerticalDivs}
    else{vDivs = data.dataPoints.length-1};
  

  
  gridCanvas = document.getElementById(gridId);
  gridCtx = gridCanvas.getContext("2d");
  dataCanvas = document.getElementById(dataId);
  dataCtx = dataCanvas.getContext("2d");
  
  xMaxPx = data.chartWidth;
  chartWidth = xMaxPx + (margins.left + margins.right);
  yMaxPx = data.chartHeight;
  chartHeight = yMaxPx + (margins.top + margins.bottom);
  
  maxXVal = getMaxXVal()//Math.round(getMaxXVal() / 10) * 10;
  maxYVal = Math.round(getMaxYVal() / 10) * 10;
  minXVal = getMinXVal()//Math.round(getMinXVal() / 10) * 10;
  minYVal = Math.round(getMinYVal() / 10) * 10;

  console.log(maxXVal);
  
  if(minYVal < 0){
  yRatio = yMaxPx/(maxYVal-minYVal); //set so that we can use minVal as our lower bound on the chart
  }
  else{
  yRatio = yMaxPx/(maxYVal); //set so that we can use 0 as our lower bound on the chart
  minYVal = 0;
  }
  
  xRatio = xMaxPx/(maxXVal-minXVal); //min X val is always going to be our leftmost value, so no need to check here
  
  
  console.log(yRatio)
  
  dataCanvas.style.height = dataCanvas.height = chartHeight*window.devicePixelRatio;
  dataCanvas.style.width = dataCanvas.width = chartWidth*window.devicePixelRatio;
  dataCtx.scale(window.devicePixelRatio,window.devicePixelRatio);
  
  
  gridCanvas.style.height = gridCanvas.height = chartHeight*window.devicePixelRatio;
  gridCanvas.style.width = gridCanvas.width = chartWidth*window.devicePixelRatio;
  gridCtx.scale(window.devicePixelRatio,window.devicePixelRatio);  
 
  
  //console.log(window.devicePixelRatio);
  
  
  renderChart();
};

var renderChart = function () { //Render the elements of the chart that use selects along with the data
  //render things if they're set to be used 
  if (useGrid == true){renderGrid()}; 
  if (useDataLabels == true){renderDataLabels()}; //Data labels on the points themself
  if (useAxisLabels == true){renderAxisLabels()}; //Axis titles/labels
  if (useIncrLabels == true){renderIncrLabels()}; //Labels on the increments of the grid
  
  renderData(data.dataPoints);
};

var renderGrid = function () {
  //draw the grid

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
  gridCtx.fillText(data.title, (margins.left+(xMaxPx/2)), (margins.top/1.5));
  }

  
  //X-Axis Label
  if(data.xLabel != "" && data.xLabel != null){
  //console.log(data.xLabel);
  size = gridCtx.measureText(data.xLabel);
  gridCtx.fillText(data.xLabel, (margins.left+(xMaxPx/2)), (yMaxPx+margins.top+margins.bottom/1.5))//, margins.left + (xMaxPx/2)-(size.width/2), yMaxPx + (margins.bottom/1.5));
  }
  
  //Y-Axis Label - save the canvas, rotate it to render text for the Y Axis label, then resore it once text rendered
  if(data.yLabel != "" && data.yLabel != null){
  gridCtx.save();
  gridCtx.rotate(-Math.PI / 2);
  gridCtx.font = labelFont;
  gridCtx.fillText(data.yLabel, (margins.top+(yMaxPx/ 2)) * -1, margins.left / 4);
  gridCtx.restore();  
  }
  
}

var renderIncrLabels = function() {

  gridCtx.font = (data.dataPointFont != null) ? data.dataPointFont : '10pt Calibri';
  
  if (minYVal < 0){
    startYLabel = minYVal;
  }
  else{
    startYLabel = 0;
  }
  
  
  var startXLabel = minXVal;
  
  console.log("First X Label: " + startXLabel);
  console.log("First Y Label: " + startYLabel);
  
  var xPos = 0;
  var yPos = 0;
  var vDivSpacing = (xMaxPx/vDivs); 
  var hDivSpacing = (yMaxPx/hDivs);
  
  gridCtx.beginPath();
  gridCtx.lineWidth=1;
  
  
  

  for (var i = 0; i < hDivs+1; i++){
      yPos += (i == 0) ? margins.top : hDivSpacing; 
      var txt = maxYVal-((i == 0) ? Math.abs(startYLabel) : i*((maxYVal-minYVal)/hDivs));
      txt = +txt.toFixed(1);
      console.log(i + " " + txt);
      var txtSize = gridCtx.measureText(txt);
      gridCtx.fillText(txt, margins.left - ((txtSize.width >= 14) ? txtSize.width : 10) -7, yPos + 4);
    
  }
  
  for (var i = 0; i < vDivs+1; i++){
      xPos += (i == 0) ? margins.left : vDivSpacing; 
      var txt =(i*((maxXVal-minXVal)/vDivs))+startXLabel;
      txt = +txt.toFixed(1);
      var txtSize = gridCtx.measureText(txt);
      gridCtx.fillText(txt, xPos, margins.top + yMaxPx + (margins.bottom / 3));    
  }
  
  
  gridCtx.strokeStyle = gridStrokeStyle;
  gridCtx.stroke();
  gridCtx.closePath();  
  
}



var renderData = function (dataPts) {
  var lastPt = {x: 0, y: 0};
  var thisPt = {x: 0, y: 0};

    
  dataCtx.beginPath(); 
  for(var i = 0; i < data.dataPoints.length; i++){
    var pt = data.dataPoints[i];
    thisPt.x = ((pt.x-data.dataPoints[0].x) * xRatio) + margins.left;//treat inital x value as "0", subtract init x from current to do so
    thisPt.y = ((maxYVal - pt.y) * yRatio) + margins.top; //reversing because canvas coords are weird and start in the top left
    console.log("Current Point coords - x: " + thisPt.x + " y: " + thisPt.y)
   if (!(lastPt.x == 0) && !(lastPt.y == 0)){
     dataCtx.moveTo(lastPt.x+0.5,lastPt.y+0.5);
     dataCtx.lineTo(thisPt.x+0.5,thisPt.y+0.5);
    }
    ptArray.push(thisPt);
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


var getMinXVal = function () {
  var minVal = data.dataPoints[0].x;
  for (let pt of data.dataPoints){
   if (pt.x < minVal){
     console.log("X: " + pt.x + " < " + minVal + ", setting minVal to that.")
     minVal = pt.x     
    }
  } 
  return minVal
}
  
var getMinYVal = function () {
  var minVal = data.dataPoints[0].y;
  for (let pt of data.dataPoints){
    if (pt.y < minVal){
     minVal = pt.y
    }
  } 
  return minVal
}  

  
  
  return{
    render: render,
    enableFadeOut: enableFadeOut,
    disableFadeOut: enableFadeOut,
    updateData: updateData
  };  
  
};

