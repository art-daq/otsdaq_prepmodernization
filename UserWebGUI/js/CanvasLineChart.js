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
  var margins = {top: 40, bottom: 75, left: 75, right: 0}; //margins
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
  var xInc;
  var displayRatio;
  var renderType = {lines: 'lines', points: 'points'};
  
  return{
    renderType: renderType,
    render: render
  }
  
}

var render = function(dataId,gridId,dataPts){
  data = dataPts;
  getMaxYVal();
  
  var gridCanvas = document.getElementById(gridId);
  gridCtx = gridCanvas.getContext("2d");
  var dataCanvas = document.getElementById(dataId);
  dataCtx = dataCanvas.getContext("2d");
  cHeight = dataCanvas.style.height;
  cWidth = dataCanvas.style.width;
  xMaxPx = chartWidth - (margin.left + margin.right);
  yMaxPx = chartHeight - (margin.top + margin.bottom);
  displayRatio = yMax/maxYVal;
  
  renderChart();
  
}


var renderChart = function () { //Render the elements of the chart that use selects along with the data
  //render things if they're set to be used 
  if (useGrid == true){renderGrid()}; 
  if (useDataLabels == true){renderDataLabels()}; //Data labels on the points themself
  if (useAxisLabels == true){renderAxisLabels()}; //Axis titles/labels
  
  if (data.renderTypes == undefined || data.renderTypes == null) {data.renderTypes = [renderType.lines]}
  for (var i = 0; i < data.renderTypes.length; i++){
      renderData(data.renderTypes[i]);
  }
  
}

var renderGrid = function () {
  //draw the grid
  gridCtx.beginPath();
  for (var x =0; x <= gridCanvas.width; x += sigWidth){ //draw vertical lines TODO Change sigWidth
    gridCtx.moveTo(0.5 + x, 0);
    gridCtx.lineTo(0.5 + x, gridCanvas.height);
  }
  
  for (var x=0; x <= gridCanvas.height; x += (cWidth/maxYVal)){ //draw horizontal lines
    gridCtx.moveTo(0,0.5+x);
    gridCtx.lineTo(gridCanvas.width, 0.5 + x); 
  }
  
  gridCtx.strokeStyle = strokeColor;
  gridCtx.stroke();
  gridCtx.closePath();
  
}  
}

var renderDataLabels = function () {
  
}

var renderAxisLabels = function () {
  var labelFont = (data.labelFont != null)?data.labelFont:'20pt Arial';
  gridCtx.font = labelFont;
  gridCtx.textAlign = "center";
  
  //Render the Title
  if(data.title != ""){
  var size = gridCtx.measureText(data.title);
  ctx.fillText(data.title, (cWidth/2), (margin.top/2));
  }
  
  //X-Axis Label
  if(xLabel != ""){
  size = gridCtx.measureText(data.xLabel);
  ctx.fillText(data.xLabel, margin.left + (xMax/2)-(size.width/2), yMax + (margin.bottom/1.2));
  }
  
  //Y-Axis Label - save the canvas, rotate it to render text for the Y Axis label, then resore it once text rendered
  if(yLabel != ""){
  gridCtx.save();
  gridCtx.rotate(-Math.PI / 2);
  gridCtx.font = labelFont;
  gridCtx.fillText(data.yLabel, (yMax / 2) * -1, margin.left / 4);
  gridCtx.restore();  
  }
  
}

var renderData = function () {
  
}

var enableFadeOut = function () {
  usePersistanceDisplay = true;
  fadeOut();
}

var disableFadeOut = function () {
  usePersistanceDisplay = false;
}

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
}



