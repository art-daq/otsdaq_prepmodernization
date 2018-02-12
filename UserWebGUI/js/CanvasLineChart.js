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
  var margins = {top: 50, bottom: 50, left: 75, right: 0}; //margins
  var chartHeight, chartWidth; // width of the whole canvas area
  var useGrid = true;
  var useDataLabels = false;
  var useAxisLabels = true;
  var usePersistanceDisplay = false; //bool vals to select what features to use
  var fadeGblAlpha = 0.1; //Global Alpha value for fadeout function 
  var timeoutVal = 150; //Timeout val uses for fadeout function
  var yMaxPx, xMaxPx; // area of the chart itself, excluding axis/margin etc. 
  var data;
  var maxYVal, maxXVal;
  var maxVertDivs, maxHorizDivs;
  var xInc;
  var displayRatio;
  var strokeColor = "lightgray";
  var renderType = {lines: 'lines', points: 'points'};

var render = function(dataId,gridId,dataPts){
  data = dataPts;
//  getMaxYVal();
  maxYVal = 29; //TODO Remove this, temp val;
  gridCanvas = document.getElementById(gridId);
  gridCtx = gridCanvas.getContext("2d");
  dataCanvas = document.getElementById(dataId);
  dataCtx = dataCanvas.getContext("2d");
  xMaxPx = data.chartWidth;
  chartWidth = xMaxPx + (margins.left + margins.right);
  yMaxPx = data.chartHeight;
  chartHeight = yMaxPx + (margins.top + margins.bottom);
  displayRatio = yMaxPx/maxYVal;
  
  dataCanvas.style.height = dataCanvas.height = chartHeight;
  dataCanvas.style.width = dataCanvas.width = chartWidth;
  
  renderChart();
};

var renderChart = function () { //Render the elements of the chart that use selects along with the data
  //render things if they're set to be used 
  if (data.useGrid == true){renderGrid()}; 
  if (data.useDataLabels == true){renderDataLabels()}; //Data labels on the points themself
  if (data.useAxisLabels == true){renderAxisLabels()}; //Axis titles/labels
  
  if (data.renderTypes == undefined || data.renderTypes == null) {data.renderTypes = [renderType.lines]}
  for (var i = 0; i < data.renderTypes.length; i++){
      renderData(data.renderTypes[i]);
  }
  
};

var renderGrid = function () {
  //draw the grid
  console.log("Drawing Grid");
  hDivs = data.HorizontalDivs;
  vDivs = data.VeticalDivs;
  var vDivSpacing = (xMaxPx/vDivs); 
  var hDivSpaceing = (yMaxPx/hDivs);
  console.log("vDiv spacing: "+ vDivSpacing + "\n" + "hDiv Spacing: " + hDivSpaceing + "\n");
  console.log("xMaxPx: " + xMaxPx);
  console.log("yMaxPx: " + yMaxPx);
  
  gridCtx.beginPath();
  for (var x = margins.left; x <= xMaxPx+margins.left; x += xMaxPx/vDivs){ //draw vertical lines
    gridCtx.moveTo(0.5 + x, margins.top);
    gridCtx.lineTo(0.5 + x, yMaxPx);
    console.log(x);
  }
  
  for (var y = margins.top; y <= yMaxPx+margins.top; y += yMaxPx/hDivs){ //draw horizontal lines
    gridCtx.moveTo(margins.left,0.5+y);
    gridCtx.lineTo(xMaxPx,  0.5+y); 
    console.log(y);
  }
  
  gridCtx.strokeStyle = strokeColor;
  gridCtx.stroke();
  gridCtx.closePath();
  
};  


var renderDataLabels = function () {
  return;
};

var renderAxisLabels = function () {
  console.log("drawing axis labels");
  var labelFont = (data.labelFont != null)?data.labelFont:'20pt Arial';
  gridCtx.font = labelFont;
  gridCtx.textAlign = "center";
  
  //Render the Title
  if(data.title != ""){
  var size = gridCtx.measureText(data.title);
  gridCtx.fillText(data.title, (chartWidth/2), (margins.top/2));
  }
  
  //X-Axis Label
  if(data.xLabel != ""){
  size = gridCtx.measureText(data.xLabel);
  gridCtx.fillText(data.xLabel, margins.left + (xMaxPx/2)-(size.width/2), yMaxPx + (margins.bottom/1.2));
  }
  
  //Y-Axis Label - save the canvas, rotate it to render text for the Y Axis label, then resore it once text rendered
  if(data.yLabel != ""){
  gridCtx.save();
  gridCtx.rotate(-Math.PI / 2);
  gridCtx.font = labelFont;
  gridCtx.fillText(data.yLabel, (yMaxPx / 2) * -1, margins.left / 4);
  gridCtx.restore();  
  }
  
}

var renderData = function () {
  return;
};

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

  
  return{
    renderType: renderType,
    render: render
  };  
  
};

