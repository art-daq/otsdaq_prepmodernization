//NimStream_app.js
//Created by Ben Hawks (bhawks at fnal.gov)

/*
 * TODO:
 * 	* Add Open Source License popup for Color picker/Jquery mask etc
 * 	* Implement function to take data from consumer and plug it into plotting function
 * 	* Add more user control/configuration for the graph style (Plot color, persistance, etc)
 * 	* Implement displays for all 4 channels being burst back to application
 */




//functions:			
	//init()					
	
//top-level scope (global) variables:
var block1El = document.getElementById('block1');//red
var block2El = document.getElementById('block2');//yellow
var block3El = document.getElementById('block3');//blue
var block4El = document.getElementById('block4');//green

  
var canvas1 = document.getElementById("canvas1"),
    ctx1 = canvas1.getContext("2d"),
    canvas2 = document.getElementById("canvas2"),
    ctx2 = canvas2.getContext("2d"),
    canvas3 = document.getElementById("canvas3"),
    ctx3 = canvas3.getContext("2d")
    canvas1Grid = document.getElementById("canvas1Grid"),
    ctx1Grid = canvas1Grid.getContext("2d"),
    canvas2Grid = document.getElementById("canvas2Grid"),
    ctx2Grid = canvas2Grid.getContext("2d"),
    canvas3Grid = document.getElementById("canvas3Grid"),
    ctx3Grid = canvas3Grid.getContext("2d");    

var color1 = document.getElementById('color1');
var color2 = document.getElementById('color2');
var color3 = document.getElementById('color3');

var gblAlpha1 = document.getElementById('gblAlpha1');
var gblAlpha2 = document.getElementById('gblAlpha2');
var gblAlpha3 = document.getElementById('gblAlpha3');
    
    
// X,Y Coords in Pixels, 0,0 is top left corner of canvas
var defaultSigHighHeight = 150;
var defaultSigLowHeight = 300;
var defaultSigWidth = 20;
var defaultVertDivs = 12;
var defaultGblAlpha = 0.1;
var defaultTimeoutval = 150;

var sigHighHeight1 = 150,
    sigLowHeight1 = 300,
    sigWidth1 = 20;

var sigHighHeight2 = 150,
    sigLowHeight2 = 300,
    sigWidth2 = 20;

var sigHighHeight3 = 150,
    sigLowHeight3 = 300,
    sigWidth3 = 20;
    
canvas1.width = canvas1.style.width = sigWidth*32;
canvas1.height = canvas1.style.height = sigLowHeight;
  
canvas2.width = canvas2.style.width = sigWidth*32;
canvas2.height = canvas2.style.height = sigLowHeight;

canvas3.width = canvas3.style.width = sigWidth*32;
canvas3.height = canvas3.style.height = sigLowHeight;

canvas1Grid.width = canvas1Grid.style.width = sigWidth*32;
canvas1Grid.height = canvas1Grid.style.height = sigLowHeight;
ctx1Grid.fillStyle = "white";
ctx1Grid.fillRect(0, 0, canvas1Grid.width, canvas1Grid.height);    
   
canvas2Grid.width = canvas2Grid.style.width = sigWidth*32;
canvas2Grid.height = canvas2Grid.style.height = sigLowHeight;
ctx2Grid.fillStyle = "white";
ctx2Grid.fillRect(0, 0, canvas2Grid.width, canvas2Grid.height); 

canvas3Grid.width = canvas3Grid.style.width = sigWidth*32;
canvas3Grid.height = canvas3Grid.style.height = sigLowHeight;
ctx3Grid.fillStyle = "white";
ctx3Grid.fillRect(0, 0, canvas3Grid.width, canvas3Grid.height); 

$(block1El).css("height",sigLowHeight);
$(block1El).css("width",sigWidth*32);

$(block2El).css("height",sigLowHeight);
$(block2El).css("width",sigWidth*32);

$(block3El).css("height",sigLowHeight);
$(block3El).css("width",sigWidth*32);

$(block4El).css("height",sigLowHeight);
$(block4El).css("width",sigWidth*32);



var getDataReq = true;
	
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

function handlerFunction(req) {
	console.log("handlerFunction() was called. Req: " + req.responseText);
	Debug.log("handlerFunction() was called. Req: " + req.responseText);

	var child1data = DesktopContent.getXMLValue(req,"rawData");
	//var child2data = DesktopContent.getXMLValue(req,"child2");
	block1El.innerHTML = child1data;
	block1El.innerHTML += "<br>";	
	console.log("--child1data:" + child1data/*," --child2data:",child2data*/);
	
}

function getData() {
  while(getDataReq){
    DesktopContent.XMLHttpRequest("dataRequest?RequestType=getRawData","",handlerFunction);
    setTimeout(getDataReq,500);
  }
}

/* 
 pxCheck();
 
 Function:
    Checks if a specified pixel's RGBA value is pure white/opaque, returns True if it is
 
 args:
    pxData - the data property of an ImageData object as returned by getImageData of a single pixel, 
	     a single dimensional array of ints 0-255 representing rgba values
 
 */
function pxCheck(pxData){
  var isWhite = false;
  if((pxData[0] == 255) && (pxData[1] == 255) && (pxData[2] == 255) && (pxData[3] == 255)){
    isWhite = true;
  }
  return isWhite;
}



/* 
  fadeOut()
  
  Function:
    "Fades out" pulses over time simalar to a phospherous oscilloscope by compositing out the previously drawn lines with a amount of transparency
  
  args:
    ctxVar - the 2D context of the canvas that the fade effect should be applied to
    canvasVar - the canvas that the 2D Context that's being faded out resides in
    gblAlphaVar - global alpha value, controls the strength of the fade. Lower the value, higher the "persistance"
    timeoutval - controls the frequency that the canvas is "faded out" at. Recommended to leave low to keep fade out smooth
		 and modify the gblAlpha value to change persistance
 */
function fadeOut(ctxVar,canvasVar,gblAlphaVar,timeoutVal) {
  //https://stackoverflow.com/questions/27082720/html5-apply-transparency-to-canvas-after-drawing-through-javascript
  ctxVar.save();
  ctxVar.globalAlpha = gblAlphaVar.value;
  ctxVar.globalCompositeOperation='destination-out'; 
  ctxVar.fillStyle= '#FFF';
  ctxVar.fillRect(0,0,canvasVar.width, canvasVar.height);    
  ctxVar.restore();   
  
  return setTimeout(function() {
    fadeOut(ctxVar,canvasVar,gblAlphaVar,timeoutVal);
    },timeoutVal);//Tune timeout value (in ms) to adjust rate of fade out, lower will update more often and fade faster
  }
  

/*
  drawGrid()
  
  Function:
    draws a grid on a ctx element based on the size/pulse parameters for the drawScope function. 
    Number of horizontal divisons is based on the canvas' width/sigWidth,
    Number of vertical divs are based on the vertDivs var.  
    
  args:
    strokeColor - desired color/style of the grid, accepts any valid CSS "style" string
    ctxVar - 2D context to draw grid on
    canvasVar - the canvas that the 2D Context to draw the grid on resides in
    vertDivs - Vertical divisons of the grid

*/  
function drawGrid(strokeColor,ctxVar,canvasVar,vertDivs){
  //reset the canvas to a blank (white) slate
  ctxVar.clearRect(0, 0, canvasVar.width, canvasVar.height);
  ctxVar.fillStyle = "white"; 
  ctxVar.fillRect(0, 0, canvasVar.width, canvasVar.height); 
  
  //draw the grid
  ctxVar.beginPath();
  for (var x =0; x <= canvasVar.width; x += sigWidth){ //draw vertical lines
    ctxVar.moveTo(0.5 + x, 0);
    ctxVar.lineTo(0.5 + x, canvasVar.height);
  }
  
  for (var x=0; x <= canvasVar.height; x += (sigLowHeight/vertDivs)){ //draw horizontal lines
    ctxVar.moveTo(0,0.5+x);
    ctxVar.lineTo(canvasVar.width, 0.5 + x); 
  }
  
  ctxVar.strokeStyle = strokeColor;
  ctxVar.stroke();
  ctxVar.closePath();
  
}  


/* 
 drawScope(scopeArr,strokeColor,ctxVar)
 
 Function:
    Draws a path, based on a binary string passed in as an argument, to represent a digital signal. 
 
 args:
    scopeArr - binary string used as an input to draw the path, should be limited to 32 bits, as the canvas' width is based upon that,
	       but if the canvas is modified to be wider, can support a longer signal 
    strokeColor - Desired color of the path, any valid "Style" string accepted
    ctxVar - the 2D context of the canvas that the path will be drawn in
 
 */
function drawScope(scopeArr,strokeColor,ctxVar,sigWidth,sigLowHeight,sigHighHeight){
  var lastHeight = 0;
  
  ctxVar.beginPath();
  
  if(scopeArr[0]=="1"){
    lastHeight = sigHighHeight+5;
    ctxVar.moveTo(0,lastHeight);
  }
  else{
    lastHeight = sigLowHeight;
    ctxVar.moveTo(0,lastHeight);
  }
  for(var i = 0; i <= scopeArr.length; i++){
    if(scopeArr[i]=="1"){
      if(lastHeight == sigHighHeight){
	ctxVar.lineTo(((i+1)*sigWidth), sigHighHeight);
      }
      else{
	ctxVar.lineTo(((i)*sigWidth), sigHighHeight);
	ctxVar.lineTo(((i+1)*sigWidth), sigHighHeight);
	lastHeight = sigHighHeight;
      }
    }
    else{
      if(lastHeight == sigLowHeight){
	ctxVar.lineTo(((i+1)*sigWidth), sigLowHeight);
      }
      else{
	ctxVar.lineTo(((i)*sigWidth), sigLowHeight);
	ctxVar.lineTo(((i+1)*sigWidth), sigLowHeight);
	lastHeight = sigLowHeight;
      }
    }
  }
  ctxVar.strokeStyle=strokeColor;
  ctxVar.stroke();
  ctxVar.closePath();
}


function chan



//Dummy Data functions to test drawing features
function keepDrawing1() {
  drawScope("1010101010101011110000", color1.value, ctx1, SigWidth1, SigLowHeight1, SigHighHeight1);
  setTimeout(keepDrawing1,1500);
}

function keepDrawing2() {
  drawScope("0001101000101011010101", color2.value, ctx2, SigWidth2, SigLowHeight2, SigHighHeight2);  
  setTimeout(keepDrawing2,2500);
}

function keepDrawing3() {
  drawScope("1101010010101110100010", color3.value, ctx3, SigWidth3, SigLowHeight3, SigHighHeight3);
  setTimeout(keepDrawing3,7000);
}

drawGrid("lightgray",ctx1Grid,canvas1Grid,defaultVertDivs);
drawGrid("lightgray",ctx2Grid,canvas2Grid,defaultVertDivs);
drawGrid("lightgray",ctx3Grid,canvas3Grid,defaultVertDivs);
keepDrawing1();
keepDrawing2();
keepDrawing3();
fadeOut(ctx1,canvas1,gblAlpha1,defaultTimeoutval);
fadeOut(ctx2,canvas2,gblAlpha2,defaultTimeoutval);
fadeOut(ctx3,canvas3,gblAlpha3,defaultTimeoutval);
//$(document).ready(getData());	
	

			
			

			
			