//NimPlus_app JS
//Created by Ben Hawks (bhawks at fnal.gov)
/* 
TODO


 - Populate remaining divs with relevant controls
 	- Add input source selection (siglog vs signorm on 3 outputs)  
 - (Later) Have the ability to load previous versions of config? 

 --- Save Procedure ---
 set subsetBasePath value
 -> getSubsetRecords
    -> getFieldsOfRecords
       -> setFieldValuesForRecords
	  -> popUpSaveModifiedTablesForm
	    -> activateGroup
      -> getFieldValuesForRecords

      
      
*/



var _TABLE_BOOL_TYPE_TRUE_COLOR = "rgb(201, 255, 201)";
var _TABLE_BOOL_TYPE_FALSE_COLOR = "rgb(255, 178, 178)";





/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

//functions:			
//init()


/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

//----------------------------------------- Save Functions -----------------------------------------
var _nimUids = null;
function getNimFieldsForSave(nimUids) {
    if (nimUids.length == 0) {
        Debug.log("No NIMPlus UID's found", Debug.HIGH_PRIORITY);
        return;
    }
    _nimUids = nimUids;
    console.log("getNimUIDs' Input: \n")
    console.log(nimUids);
    console.log("\n");
    Debug.log("getNimUIDs ", Debug.INFO_PRIORITY);

    ConfigurationAPI.getFieldsOfRecords(
        _subsetBasePath, nimUids,//["NimPlus0"]
        "",/*_editableFieldList*/
        -1,//maxDepth
        setNimFieldValuesForSave,//responseHandler
        _modifiedTables//modifiedTables
    );
}
var valsToWrite = [];
var objToWrite = [];
function setNimFieldValuesForSave(recFields) {
  var valsToWrite = [];
  var objToWrite = [];
  //Debug.log("recFields found = " + recFields.length);	
    
    console.log("setNimFields input: \n");
    console.log(recFields);
    console.log("\n");

      
//Compare Modified list and list of returned fields, populate a 2 arrays with the objects and data to write 
//to the table of the elements of the page that have been modified since last save    
    for (let i of modifiedList) {
      console.log("got to 1");
        for (let a of recFields) {
	  console.log("got to 2");
          if(a.fieldColumnName == i[0]) {
		
		objToWrite.push(a); //objects to update
		valsToWrite.push(i[1]); //values for the corresponding objects
                console.log("Object found");
		console.log(a);
		console.log(i);
		
	    }
	    else{
	    //console.log("\nno match for " + a.fieldColumnName);
	   //console.log(a);
	    //console.log(i);
	      
	    }
	}
    }
    console.log(objToWrite);
    console.log(valsToWrite);
    
    ConfigurationAPI.setFieldValuesForRecords(
        _subsetBasePath,//subsetBasePath 
	selUID,//recordArr
        objToWrite,//fieldObjArr
	valsToWrite,//valueArr
        saveNimTableDialog,//responseHandler
        _modifiedTables//modifiedTables
    )

};

function saveNimTableDialog(modifiedTables){
  modifiedList = [];  
  console.log(modifiedTables);
    _modifiedTables = modifiedTables;
    ConfigurationAPI.saveModifiedTables(
    modifiedTables,
    activateNimTables
    )
};
function activateNimTables(SavedTable,SavedGroup,SavedAlias){
  for(let i of SavedGroup) {
    ConfigurationAPI.activateGroup(i.groupName, i.groupKey, false)
  }
  
        //#43c130 = green color, alerts user that changes are saved
        $("body").css("background-color", "#43c130");
        //Table Updates Here					
        Debug.log("NimPlus Configuration Changes Saved to UID " + selUID[0], Debug.INFO_PRIORITY);
        console.log("Page Values Saved");
        console.log(modifiedList);

        document.getElementById("saveEl").innerHTML = "Save Successful!";
    
};


//------------------------------------Error Check etc. Functions------------------------------------
var timeout = null; //voltField timeout value, used to wait till user done entering a value		
var modifiedList = []; //List of values that are modified, used to keep track of what values need to be updated
var invalidInput = false; //Track if any textbox input is invalid, used to prevent saving if there is
var syncArray = [0,0,0,0,0,0,0,0] //empty array for 40Mhz Sync Word
var logicArray = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0] //empty array for coincidence logic word
var _subsetBasePath = "FENIMPlusInterfaceConfiguration";
var _modifiedTables;
var fieldList = [["NimStatus","Status"],
["NimPlusIP","InterfaceIPAddress"],
["NimPlusPort","InterfacePort"],
["otsHostIP","HostIPAddress"],
["otsHostPort","HostPort"],
["ChAInEn","EnableInputChannelA"],
["ChBInEn","EnableInputChannelB"],
["ChCInEn","EnableInputChannelC"],
["ChDInEn","EnableInputChannelD"],
["ChAInInv","InvertPolarityInputChannelA"],
["ChBInInv","InvertPolarityInputChannelB"],
["ChCInInv","InvertPolarityInputChannelC"],
["ChDInInv","InvertPolarityInputChannelD"],
["ChADacEl1","DACValueChannelA"],
["ChBDacEl1","DACValueChannelB"],
["ChCDacEl1","DACValueChannelC"],
["ChDDacEl1","DACValueChannelD"],
["ChAOutMux","OutputMuxSelectChannelA"],
["ChBOutMux","OutputMuxSelectChannelB"],
["ChCOutMux","OutputMuxSelectChannelC"],
["ChDOutMux","OutputMuxSelectChannelD"],
["ChAOutInv","InvertPolarityOutputChannelA"],
["ChBOutInv","InvertPolarityOutputChannelB"],
["ChCOutInv","InvertPolarityOutputChannelC"],
["ChDOutInv","InvertPolarityOutputChannelD"],
["Sync1","TriggerClockMask"],
["VetoCount","OutputTimeVetoDurationChannel0"],
["Veto1Count","OutputTimeVetoDurationChannel1"],
["Veto2Count","OutputTimeVetoDurationChannel2"],
["VetoSourceOutput0","InputChannelVetoSourceForOutputChannel0"],
["VetoSourceOutput1","InputChannelVetoSourceForOutputChannel1"],
["VetoSourceOutput2","InputChannelVetoSourceForOutputChannel2"],
["PsCount","OutputPrescaleCountChannel0"],
["PsCount1","OutputPrescaleCountChannel1"],
["PsCount2","OutputPrescaleCountChannel2"],
["SL0","CoincidenceLogicWord"],
["bkpEnableA","EnableBackPressureInputA"],
["bkpEnableB","EnableBackPressureInputB"],
["SGPulseCnt","SignalGeneratorPulseCount"],
["SGHighPer","SignalGeneratorHighPeriod"],
["SGLowPer","SignalGeneratorLowPeriod"],
["sigGenEn","SignalGeneratorEnable"],
["sigGenInv","SignalGeneratorInvertPolarity"],
["ChADelayEl","DelayInputChannelA"],
["ChAWidthEl","WidthInputChannelA"],
["ChBDelayEl","DelayInputChannelB"],
["ChBWidthEl","WidthInputChannelB"],
["ChCDelayEl","DelayInputChannelC"],
["ChCWidthEl","WidthInputChannelC"],
["ChDDelayEl","DelayInputChannelD"],
["ChDWidthEl","WidthInputChannelD"],
["ChSNDelayEl","DelayOutputChannel0"],
["ChSNWidthEl","WidthOutputChannel0"],
["ChSCMS1DelayEl","DelayOutputChannel1"],
["ChSCMS1WidthEl","WidthOutputChannel1"],
["ChSCMS2DelayEl","DelayOutputChannel2"],
["ChSCMS2WidthEl","WidthOutputChannel2"]
]


//function testFunc() {
//    ConfigurationAPI.getSubsetRecords(
//        _subsetBasePath /*subsetBasePath*/ ,
//        "", //"FEInterfacePluginName=FEOtsUDPTemplateInterface"/*filterList*/,
//        getNimUIDs /*responseHandler*/ ,
//        _modifiedTables /*modifiedTables*/ )
//}


// Save Page Function
function savePageValues(e) {
  if(modifiedList.length > 0){ 
    if (invalidInput == false) {

				
	
//	ConfigurationAPI.getSubsetRecords(
//      _subsetBasePath /*subsetBasePath*/ ,
//        "", //"FEInterfacePluginName=FEOtsUDPTemplateInterface"/*filterList*/,
//        getNimFieldsForSave /*responseHandler*/ ,
//        _modifiedTables /*modifiedTables*/ )      
	
	ConfigurationAPI.getFieldsOfRecords(
        _subsetBasePath, selUID,//["NimPlus0"]
        "",/*_editableFieldList*/
        -1,//maxDepth
        setNimFieldValuesForSave,//responseHandler
        _modifiedTables//modifiedTables
			 )
      
      

    } else {
        document.getElementById("saveEl").innerHTML = "Warning! Unable to save, some fields contain invalid values";
        console.log("Warning! Textbox on page has invalid value, aborting save...")
        console.log("Please check the following fields for possible invalid values (some might be correct)");
        Debug.log("NimPlus Configuration Changes NOT Saved, Invalid value(s) in fields", Debug.HIGH_PRIORITY);
        console.log(modifiedList);
    }
  }
  else{
    Debug.log("Error! No Changes to Save!", Debug.WARN_PRIORITY);
  }
}

//Calculate the 40 Mhz Sync Mask
function syncMaskCalc(val,a) {
    syncArray[a]=val;
    var n = 0;
    var l = syncArray.length;
    for (var i = 0; i < l; i++) {
        n = (n << 1) + (syncArray[i]?1:0);
        }
    console.log(n)
    return n;
}

//Calculate the Coincidence Logic Word
function LogicWordCalc(val,a) {
    logicArray[a]=val;
    var n = 0;
    var l = logicArray.length;
    for (var i = 0; i < l; i++) {
        n = (n << 1) + (logicArray[i]?1:0);
        }
    console.log(n)
    return n;
}

//Return an element by it's ID string
function elByID(id) {
    e = document.getElementById(id);
    return e;
}
//Return an element's value by it's ID String
function valByID(id) {
    e = document.getElementById(id);
    return e.value;
}

//Set invalid input flag to false to allow saving
function validInput(e) {
    invalidInput = false;
}

//Set invalid input flag to true to disallow saving
function invalidValue(e) {
    invalidInput = true;
}

//Delay&Width Error Checking
function dwValidCheck(firstVal, secondValElId, msgElId) {
    firstVal = parseInt(firstVal);
    var secondVal = parseInt(document.getElementById(secondValElId).value);
    if ((firstVal + secondVal) > 64) {
        //console.log((firstVal + secondVal));
        document.getElementById(msgElId).innerHTML = "Invald Delay/Width Combination! Sum of Delay and Width should be <=64!";
        $("#" + msgElId).css("background-color", "red");
        invalidInput = true;
    } else {
        document.getElementById(msgElId).innerHTML = "";
        $("#" + msgElId).css("background-color", "#eee");
        invalidInput = false;
    }

}



//Add a value to the list to save into the selected row (UID) of the NIMPlus table
 function addModifiedList(tableVal, tableDat) {
    //#fcd125 = yellow color, notifies user that there are unsaved changes on the page
    $("body").css("background-color", "#fcd125")
    document.getElementById("saveEl").innerHTML = "Unsaved Changes are Present";

    var modifiedListNames = modifiedList.map(function(value,index) { return value[0]; });
    existsAt = null;
    existsAt = $.inArray(tableVal, modifiedListNames);
    //document.getElementById("saveEl").innerHTML = "";
    if (existsAt < 0) {
       console.log(existsAt);
       console.log($.inArray(tableVal, modifiedList[0]));
       console.log(tableVal);
       console.log(modifiedList[0]);
       modifiedList.push([tableVal, tableDat]);
       console.log(modifiedList);
    } else {
       modifiedList[existsAt] = [tableVal,tableDat];
        //console.log(" element already exists in modified list, not updating list...")
    }

}
//Dac Control Functions to link all 3 inputs together
//Dac ranges from 0-3.3 volts with 4096 (0-4095) steps of resolution, input must be step value

//Update the volt field and steps when the slider is changed
function voltSlider(myValue, VoltElId, StepsElId) {
    voltVal = (((10000 * ((myValue * (33 / 40950)))) + (((8 - (10000 * ((myValue * (33 / 40950)))) % 8)))) / 10000) - 0.0008;
    document.getElementById(StepsElId).value = myValue;
    document.getElementById(VoltElId).value = voltVal.toFixed(4);
    invalidInput = false;
}

//A litte ugly, but it works 
//Update the volt slider and steps when the field is changed
function voltField(VoltElId, SlideElId, StepElId) {
    clearTimeout(timeout);
    timeout = setTimeout(function () {
        myValue = VoltElId.value;
        newValue = (((10000 * myValue) + (((8 - (10000 * myValue) % 8)))) / 10000) - 0.0008;
        document.getElementById(SlideElId).value = Math.round((40950000 * newValue / 33000));
        document.getElementById(StepElId).value = Math.round((40950000 * newValue / 33000));
        VoltElId.value = newValue.toFixed(4);
        console.log(newValue)
        console.log(newValue.toFixed(4));
        invalidInput = false;
    }, 900);


}
// update the slider and field when the steps are changed
function voltSteps(myValue, VoltElId, SlideElId) {
    voltVal = (((10000 * ((myValue * (33 / 40950)))) + (((8 - (10000 * ((myValue * (33 / 40950)))) % 8)))) / 10000) - 0.0008;
    document.getElementById(SlideElId).value = (myValue);
    document.getElementById(VoltElId).value = voltVal.toFixed(4) //(myValue * 33 / 40950);
    invalidInput = false;

}

// ------------------------------ JQuery UI Stuff ------------------------------

$(document).ready(function () {
    // Set Background color		
    //#6b86ff = Light Blue, indicates page is unchanged/ @ default state
    $("body").css("background-color", "#6b86ff")

    // CSS for Inner (hidden) divs
    //Hide the divs by default


    //InChEnCtl
    $("#InChEnCtl").hide();

    //DacCtl
    $("#DacCtl").hide();

    //DWConfig
    $("#DWConfigCtl").hide();

    //InMuxCtl
    $("#InMuxCtl").hide();

    //OutMuxCtl
    $("#OutMuxCtl").hide();
    /*
    //ResetCtl
    $("#ResetCtl").hide();
				
    //EnableCtl
    $("#EnableCtl").hide();
    */
    //SyncCtl
    $("#SyncCtl").hide();

    //VetoCtl
    $("#VetoCtl").hide();

    //PsCtl
    $("#PsCtl").hide();

    //SelLogCtl
    $("#SelLogCtl").hide();

    //BkpCtl
    $("#BkpCtl").hide();

    //SigGenCtl
    $("#SigGenCtl").hide();
    
    //ConnCtl
    $("#ConnCtl").hide();

    //Setup button actions to hide/show the divs

    $("#InChEnCtlBtn").click(function () {
        $("#InChEnCtl").toggle(400);
    });

    $("#DacCtlBtn").click(function () {
        $("#DacCtl").toggle(400);
    });

    $("#DWConfigBtn").click(function () {
        $("#DWConfigCtl").toggle(400);
    });

    $("#InMuxCtlBtn").click(function () {
        $("#InMuxCtl").toggle(400);
    });

    $("#OutMuxCtlBtn").click(function () {
        $("#OutMuxCtl").toggle(400);
    });
    /*    
    $("#ResetCtlBtn").click(function(){
	    $("#ResetCtl").toggle(400);
    });
	      
    $("#EnableCtlBtn").click(function(){
	    $("#EnableCtl").toggle(400);
    });  
	    			*/
    $("#SyncCtlBtn").click(function () {
        $("#SyncCtl").toggle(400);
    });

    $("#VetoCtlBtn").click(function () {
        $("#VetoCtl").toggle(400);
    });

    $("#PsCtlBtn").click(function () {
        $("#PsCtl").toggle(400);
    });

    $("#SelLogCtlBtn").click(function () {
        $("#SelLogCtl").toggle(400);
    });

    $("#BkpCtlBtn").click(function () {
        $("#BkpCtl").toggle(400);
    });

    $("#SigGenCtlBtn").click(function () {
        $("#SigGenCtl").toggle(400);
    });
    
    $("#ConnCtlBtn").click(function () {
        $("#ConnCtl").toggle(400);
    });

    //Setup IP Address Mask for input
    $('.ip_address').mask('0ZZ.0ZZ.0ZZ.0ZZ', {translation: {'Z': {pattern: /[0-9]/, optional: true}}}); 

    //Grab values to populate fields
    	ConfigurationAPI.getSubsetRecords(
        _subsetBasePath /*subsetBasePath*/ ,
        "", //"FEInterfacePluginName=FEOtsUDPTemplateInterface"/*filterList*/,
        getNimUidsForList /*responseHandler*/ ,
        _modifiedTables /*modifiedTables*/ )     
		
    
});

// ---------------------------------------------- Field Population ------------------------------------------------------

var selUID;
var bitCnt;

function getNimUidsForList(nimUids) {
    if (nimUids.length == 0) {
        Debug.log("No NIMPlus UID's found", Debug.HIGH_PRIORITY);
        return;
    }
	else{
    _nimUids = nimUids;
    console.log("getNimUIDs' Input: \n")
    console.log(nimUids);
    console.log("\n");
    //Debug.log("getNimUIDs ", Debug.INFO_PRIORITY);
    console.log(nimUids)
    console.log("first index: " + nimUids[0])
	$.each(nimUids, function(val, text) {
            $('#nimUIDSelect').append( $('<option></option>').val(text).html(text) )
	    console.log(val)
	    console.log(text)
            }); 
    selUID = [nimUids[0]];
    console.log(selUID);
    ConfigurationAPI.getFieldsOfRecords(
        _subsetBasePath, selUID,//["NimPlus0"]
        "",/*_editableFieldList*/
        -1,//maxDepth
        getNimFieldsForPage,//responseHandler
        _modifiedTables//modifiedTables
    );
	}
}

function getNimFieldsForPage(recFields){
      console.log("recFields:  \n");
      console.log(recFields);
      ConfigurationAPI.getFieldValuesForRecords(
        _subsetBasePath, selUID,
        recFields,
        getNimValuesForPage,
        _modifiedTables)
}

function getNimValuesForPage(recFields) {
  //Debug.log("recFields found = " + recFields.length);	
    
    console.log("getNimValuesForPage input: \n");
    console.log(recFields);
    console.log("\n");
    
    for (let i of fieldList) {
        for (let a of recFields) {
          if(a.fieldPath.includes(i[1])) { //found value
	    try{
			if(elByID(i[0]).type == "checkbox" && !a.fieldPath.includes("CoincidenceLogicWord") && !a.fieldPath.includes("TriggerClockMask")){
				if(a.fieldValue == "Yes" || a.fieldValue == "True" || a.fieldValue == "On"){
					elByID(i[0]).checked = true;
					console.log("checkbox element " + i[0] + " set to checked = true")
				}
				else{
					elByID(i[0]).checked = false;
					console.log("checkbox element " + i[0] + " set to checked = false")
				}
			}
			else if(a.fieldPath.includes("CoincidenceLogicWord")){
				for(bitCnt=0; bitCnt<=15; bitCnt++){
				elByID("SL"+bitCnt.toString()).checked=((a.fieldValue>>(bitCnt)) % 2 != 0);
				logicArray[bitCnt]=((a.fieldValue>>(15-bitCnt)) % 2 != 0); //intentionally reversing bit order
				}
			  
				console.log("Coincidence Logic Word set");
			}
			else if(a.fieldPath.includes("TriggerClockMask")){
			  	for(bitCnt=0; bitCnt<=7; bitCnt++){
				elByID("Sync"+(bitCnt+1).toString()).checked=((a.fieldValue>>(7-bitCnt)) % 2 != 0); //intentionally reversing bit order
				syncArray[bitCnt]=((a.fieldValue>>(7-bitCnt)) % 2 != 0);  //intentionally reversing bit order
				}
				console.log("Trigger Clock Mask set")			
			}
			else if(elByID(i[0]).id=="ChADacEl1"){
			  voltSteps(a.fieldValue, "ChADacEl2", "ChADacEl0")
			  elByID(i[0]).value = a.fieldValue
			  console.log("Set CH A Dac")
			}
			else if(elByID(i[0]).id=="ChBDacEl1"){
			  voltSteps(a.fieldValue, "ChBDacEl2", "ChBDacEl0")
			  elByID(i[0]).value = a.fieldValue
			  console.log("Set CH B Dac")
			}
			else if(elByID(i[0]).id=="ChCDacEl1"){
			  voltSteps(a.fieldValue, "ChCDacEl2", "ChCDacEl0")
			  elByID(i[0]).value = a.fieldValue
			  console.log("Set CH C Dac")
			}
			else if(elByID(i[0]).id=="ChDDacEl1"){
			  voltSteps(a.fieldValue, "ChDDacEl2", "ChDDacEl0")
			  elByID(i[0]).value = a.fieldValue
			  console.log("Set CH D Dac")
			}
			else{
				elByID(i[0]).value = a.fieldValue;
				console.log("set element " + i[0] + " to value " + a.fieldValue)
			  }
	    }
	    catch(e){
	      console.log("\n!!!_-_-_WARNING_-_-_!!!\n");
	      console.log("Exception occured while trying to set an element supposedly named " + i[0] + " to the value of " + a.fieldValue + " from the field " + a.fieldPath);
	      console.log("Incoming exception data...\n");
	      console.log(e);
	      console.log("\n!!!_-_-_END WARNING_-_-_!!!\n");
			  } 
		
	    }
	    else{/*
	    console.log("\nno match for " + a.fieldColumnName);
	    console.log(a.fieldColumnName);
	    console.log(i[1]);
	    console.log(a.fieldColumnName == i[1]);
	     */ 
	    }
	}
    }

   

};

//Update form data when UID is swiched
function getNimValuesOnUIDSelect(selValue) {
	  
  selUID = [selValue];
  console.log(selUID);
    ConfigurationAPI.getFieldsOfRecords(
        _subsetBasePath, selUID,//["NimPlus0"]
        "",/*_editableFieldList*/
        -1,//maxDepth
        getNimFieldsForPage,//responseHandler
        _modifiedTables//modifiedTables
    );

};


