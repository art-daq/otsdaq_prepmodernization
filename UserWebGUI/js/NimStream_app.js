//NimStream_app.js
//Created by Ben Hawks (bhawks at fnal.gov)

/*
 * TODO:
 * 	* Everything
 * 
 */




//functions:			
	//init()					
	
//top-level scope (global) variables:
var block1El;
var block2El;
var block3El;
var block4El;
    
block1El = document.getElementById('block1');//red
block2El = document.getElementById('block2');//yellow
block3El = document.getElementById('block3');//blue
block4El = document.getElementById('block4');//green
  
var canvas1 = document.getElementById("canvas1"),
    ctx1 = canvas1.getContext("2d"),
    canvas2 = document.getElementById("canvas2"),
    ctx2 = canvas2.getContext("2d"),
    canvas3 = document.getElementById("canvas3"),
    ctx3 = canvas3.getContext("2d");

// X,Y Coords in Pixels, 0,0 is top left corner of canvas
var sigHighHeight = 150;
var sigLowHeight = 300;
var sigWidth = 20;

canvas1.width = canvas1.style.width = sigWidth*32;
canvas1.height = canvas1.style.height = sigLowHeight;
ctx1.fillStyle = "white";
ctx1.fillRect(0, 0, canvas1.width, canvas1.height);    
   
canvas2.width = canvas2.style.width = sigWidth*32;
canvas2.height = canvas2.style.height = sigLowHeight;
ctx2.fillStyle = "white";
ctx2.fillRect(0, 0, canvas2.width, canvas2.height); 

canvas3.width = canvas3.style.width = sigWidth*32;
canvas3.height = canvas3.style.height = sigLowHeight;
ctx3.fillStyle = "white";
ctx3.fillRect(0, 0, canvas3.width, canvas3.height); 

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
    "Fades out" pulses over time simalar to a phospherous oscilloscope by drawing 
    very transparent white rectanges over the canvas until no pulse is there
  
  args:
    ctxVar - the 2D context of the canvas that the fade effect should be applied to
 */
function fadeOut(ctxVar,canvasVar) {
  var highPx = ctxVar.getImageData(sigWidth/2,sigHighHeight,1,1).data; // get pixel from where a "high" signal would be
  var lowPx = ctxVar.getImageData(sigWidth/2,sigLowHeight,1,1).data; //get a pixel from where a "low" signal would be
  
  if(!pxCheck(highPx) || !pxCheck(lowPx)){ //if neither pixel is white, fill whole canvas with a (very transparent) white rectange to "fade out" the drawn pulses
    ctxVar.fillStyle = "rgba(255,255,255,0.08)"; //Tune 'a' (transparency) value of rgba to adjust rate of fade out, lower is slower
    ctxVar.fillRect(0, 0, canvasVar.width, canvasVar.height);
    return setTimeout(function() {
    fadeOut(ctxVar,canvasVar);
    },100);//Tune timeout value (in ms) to adjust rate of fade out, lower will update more often and fade faster
  }
  else{
    return;
  }
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
function drawScope(scopeArr,strokeColor,ctxVar){
  var lastHeight = 0;
  ctxVar.beginPath();
  if(scopeArr[0]=="1"){
    lastHeight = sigHighHeight;
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
  //fadeOut(ctxVar); //Potentially remove when getting constant updates? might spawn multiple instances and fade faster/overload browser?
}

function keepDrawing1() {
  drawScope("1010101010101011110000","red", ctx1);
  setTimeout(keepDrawing1,1500);
}

function keepDrawing2() {
  drawScope("0001101000101011010101","green", ctx2);  
  setTimeout(keepDrawing2,2500);
}


function keepDrawing3() {
  drawScope("1101010010101110100010","blue", ctx3);
  setTimeout(keepDrawing3,7000);
}


keepDrawing1();
keepDrawing2();
keepDrawing3();
fadeOut(ctx1,canvas1);
fadeOut(ctx2,canvas2);
fadeOut(ctx3,canvas3);
//$(document).ready(getData());	
	

			
			

			
			