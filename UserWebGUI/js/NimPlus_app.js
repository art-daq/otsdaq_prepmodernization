//NimPlus_app JS
/* 
TODO

 - Change ModifiedTable names to be names of corresponding collumns in FENimPlusConfig.. Table
 - Populate remaining divs with relevant controls
 	- Add input source selection (siglog vs signorm on 3 outputs) 
 - add functionality to Save Page Function to modify table values that have been changed on this GUI
 - Potentially consolidate ColumnList and DataList so that array holds only updated column names with new data?
 - somehow get objects to send back to ConfigurationAPI.setFieldsOfRecords's <fieldObjectArr> that match the fields that need to be updated
 	- $.InArray of DataList and returned objects?
 	- Forge objects from DataList to send back without reading??????? (super hack-ey, avoid if possible)
 	
 	Get objects and data to write
 
 	where dataList=[[fieldName,data]]
 	where Objects returned from getFieldsOfRecords = 
 		      {{obj.fieldTableName 
//			obj.fieldUID 
//			obj.fieldColumnName
//			obj.fieldRelativePath b
//			obj.fieldColumnType}}
 	for a in dataList(
 		for b in Objects(
 			if dataList[a,0] == Objects[b].fieldRelitivePath(
 				datToSend[a,0] = Objects[b]
 				datToSend[a,1] = dataList[a,1]
 			) 
 		)
 	)
 - Figure out actual table config, 1 or 2 tables? functional reasoning for 2 tables?
	- if 2 tables nessicary, figure out what needs to be done to modify second table values
 - add support for more than one nimplus/ saving to a different UID 



*/
//---------------------------------OTS Table Stuff---------------------------------------------------

//	Description of Configuration-Subset Functionality/Behavior:
//	
//	GET parameters:
//		<subsetBasePath> = Records at this path are the target of this GUI, e.g. “FEInterfaceConfiguration”
//		<groupingFieldList> = CSV list of tree paths relative to <baseTable>, e.g. “LinkToFETypeConfiguration,FEInterfacePluginName”
//									- these are the fields that can be used to filter UID records by (and these will cause grouping in square-view)	
//		<editableFieldList> = empty string or "DEFAULT" for all, or CSV list of fields to show for editing
//		<filterFieldList> = CSV list (of forced filter) of tree paths relative to <baseTable> and = value, e.g. "LinkToFETypeConfiguration=NIMPlus,FEInterfacePluginName=NIMPlusPlugin"
//									- this is like a pre-filter (filter on records UID that user can not control)	
//	- Requires user to have LOCK
//	
//	- Split window into two panes: Left and Right; Left is fixed width and hideable.	
//	
//	- Left Pane:
//		* Fixed width, vertical auto scroll, hideable.
//		* Filter icon that toggles display of multi-select boxes for each <subLevelGrouping>. 
//		* Filtering:
//		 	- AND/OR option if multiple sublevels
//			- multi-select for each <subLevelGrouping>
//		* Icon to toggle record representation (Multi-select or Square Grid groupings)
//		* Record UID Selector:
//			- Multi-select box for selection of UID (based on sublevelgrouping filters)
//		* Alternatively can represent the detectors as squares (with mouse over UID names)
//			- Squares will be grouped by SubLevel using AND logic with a sublevel-label
//					
//	- Right Pane:
//		* Show fields that are common based on SubLevelGrouping filters
//			- E.g. if *,* then can only show SlowControls fields
//			- Challenge: show all common fields, even through links
//			- Allow editing the field (based on type) .. same as tree edit, but like already clicked 
//		
//	- Save functionality should be same as saving tree	
//		* If admin, give options to target a certain system alias.. Etc.
//		* Else assume saving to currently active groups



var _TABLE_BOOL_TYPE_TRUE_COLOR = "rgb(201, 255, 201)";
var _TABLE_BOOL_TYPE_FALSE_COLOR = "rgb(255, 178, 178)";





/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

//functions:			
//init()


/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////



var _subsetBasePath = "FENIMPlusInterfaceConfiguration";
var _modifiedTables;
//Not Used
//init called once body has loaded
function init() {

    Debug.log("CfgGUI_sebset init ");

    ConfigurationAPI.getSubsetRecords(
        _subsetBasePath /*subsetBasePath*/ ,
        "FEInterfacePluginName=FENIMPlusInterface" /*filterList*/ ,
        getNimUIDs /*responseHandler*/ ,
        _modifiedTables /*modifiedTables*/ );

    return;


} //end init()

function getNimUIDs(nimUids) {
    if (nimUids.length == 0) {
        Debug.log("getNimUIDs err ", Debug.HIGH_PRIORITY);
        return;
    }

    Debug.log("getNimUIDs ", Debug.INFO_PRIORITY);

    ConfigurationAPI.getFieldsOfRecords(
        _subsetBasePath, ["NIMPlus0"], //nimUids,
        "", //""/*_editableFieldList*/,
        -1,
        getNimFields,
        _modifiedTables
    );
}

var _localFields;
var datToSend = [["DACValueChannelA", 1400]];

function getNimFields(recFields) {
    _localFields = recFields;
    Debug.log("recFields found = " + recFields.length);

    var str //= document.body.innerHTML;
    str += "<br>GetFields";
    str += "<br>";
    for (var i in recFields)
        str += i + ": " + recFields[i].fieldRelativePath +
        recFields[i].fieldColumnName + "<br>";
    //document.body.innerHTML = str;		
    console.log(str);
    ConfigurationAPI.getFieldValuesForRecord(
        _subsetBasePath, ["NIMPlus0"],
        _localFields,
        getNimFieldValues,
        _modifiedTables
    )
    var aRelPath
    for (let i of dataList) {
        /*TODO*/
        for (let a of recFields) {
            if (i[0] == a.fieldRelitivePath) {
                datToSend.push([a, i[1]]) //Object,Data
            }
        }
    }


};

var firstTime = true;

function getNimFieldValues(recFieldValues) {
    var str //= document.body.innerHTML;
    str += "<br>GetFieldValues ";
    str += "<br>";
    for (var i in recFieldValues)
        str += recFieldValues[i].fieldUID + ": " +
        recFieldValues[i].fieldPath + ": " +
        recFieldValues[i].fieldValue + "<br>";
    //document.body.innerHTML = str;
    console.log(str)
    /*
    if(firstTime)			
    	ConfigurationAPI.setFieldValuesForRecords(
    				_subsetBasePath,
    				["FENimPlus0"],
    				[_localFields[3],_localFields[1]], //fieldArr
    				["0","0"], //valueArr
    				handleSetNimValues,
    				_modifiedTables);
    				
    */
    firstTime = false;
}

function handleSetNimValues(modifiedTables) {
    _modifiedTables = modifiedTables;

    ConfigurationAPI.getFieldValuesForRecord(
        _subsetBasePath, ["NIMPlus0"],
        _localFields,
        getNimFieldValues,
        _modifiedTables
    )
}









//------------------------------------Error Check etc. Functions------------------------------------
var timeout = null; //voltField timeout value, used to wait till user done entering a value		
var modifiedList = []; //List of values that are modified, used to keep track of what values need to be updated
var invalidInput = false; //Track if any textbox input is invalid, used to prevent saving if there is
var columnList = [] //fields that have had changes since last save/page load, [Column Name]
var dataList = [[null, null]] // All data in form(s), [Column Name, Data]
var updatedFields = [[null, null]] // Fields to update, [Field Object, data]
var syncArray = [0,0,0,0,0,0,0,0]



function testFunc() {
    console.log(ConfigurationAPI.getSubsetRecords(
        _subsetBasePath /*subsetBasePath*/ ,
        "", //"FEInterfacePluginName=FEOtsUDPTemplateInterface"/*filterList*/,
        getNimUIDs /*responseHandler*/ ,
        _modifiedTables /*modifiedTables*/ ))
}


//TODO Save Page Function
function savePageValues(e) {
    if (invalidInput == false) {

        //do stuff to save here					
        //#43c130 = green color, alerts user that changes are saved
        $("body").css("background-color", "#43c130");
        //Table Updates Here					
        //Debug.log("NimPlus Configuration Changes Saved", Debug.INFO_PRIORITY);
        console.log("Page Values Saved");
        console.log(modifiedList);
        modifiedList = [];

        document.getElementById("saveEl").innerHTML = "Save Successful!";
    } else {
        document.getElementById("saveEl").innerHTML = "Warning! Unable to save, some fields contain invalid values";
        console.log("Warning! Textbox on page has invalid value, aborting save...")
        console.log("Please check the following fields for possible invalid values (some might be correct)");
        //Debug.log("NimPlus Configuration Changes NOT Saved, Invalid value(s) in fields", Debug.HIGH_PRIORITY);
        console.log(modifiedList);
    }
}
//Updates all data in dataList
function updateDataList() {

}




function DWCalcWord(delay, width) {
    //calculate the delay/width word for a given delay and width
    /*
    shiftval = 64 - width 
    WMask = TMask << shiftval
    word = WMask >>> delay
    */
    width = parseInt(width);
    delay = parseInt(delay);
    var word = null;
    var FMask = 0x0000000000000000; //false/0 mask
    var TMask = 0xFFFFFFFFFFFFFFFF; //True/1 mask	
    var shiftval = 64 - width;
    var WMask = TMask * Math.pow(2, shiftval); //Left Shift 
    console.log("WMask: " + WMask.toString(2));
    word = WMask * Math.pow(2, (-1 * delay)); //Right Shift
    printWord = word.toString(2)
    //printWord = "0000000000000000000000000000000000000000000000000000000000000000".substr(printWord.length)+printWord;
    console.log("Output DW Word: " + printWord)
    return word;
}

function syncMaskCalc(val,a) {
    syncArray[a]=val;
    var n = 0;
    var l = syncArray.length;
    for (var i = 0; i < l; i++) {
        n = (n << 1) + (syncArray[i]?1:0);
        }
    console.log(n)
    //Calculate the 40 Mhz Sync Mask
    return n;
}

function elByID(id) {
    e = document.getElementById(id);
    return e;
}

function valByID(id) {
    e = document.getElementById(id);
    return e.value;
}

function validInput(e) {
    invalidInput = false;
}


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

function addModifiedList(tableVal, tableDat) {
    //#fcd125 = yellow color, notifies user that there are unsaved changes on the page
    $("body").css("background-color", "#fcd125")
    existsAt = $.inArray(tableVal, modifiedList[0]);
    //document.getElementById("saveEl").innerHTML = "";
    if (existsAt < 0) {
        modifiedList.push([tableVal, tableDat]);
    } else {
        modifiedList[existsAt] = [tableVal,tableDat];
        //console.log(" element already exists in modified list, not updating list...")
    }

}
//Dac Control Functions to link all 3 inputs together


function voltSlider(myValue, VoltElId, StepsElId) {
    voltVal = (((10000 * ((myValue * (33 / 40950)))) + (((8 - (10000 * ((myValue * (33 / 40950)))) % 8)))) / 10000) - 0.0008;
    document.getElementById(StepsElId).value = myValue;
    document.getElementById(VoltElId).value = voltVal.toFixed(4);
    invalidInput = false;
}

//A litte ugly, but it works 
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
    //				$("#SigGenCtl").css( "background-color","lightgrey"  );
    //				$("#SigGenCtl").css( "border-left", "3px solid red" );
    $("#SigGenCtl").hide();

    // Hide/Show Divs

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
});
