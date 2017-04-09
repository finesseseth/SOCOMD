
// Edit these lines as needed

// Author
author = "LT SHARKIE";

class Header {

// Game type, see (https://community.bistudio.com/wiki/Multiplayer_Game_Types) for valid options
gameType = Coop;

// Minimum Players, shouldn't need to change this
minPlayers = 1;

// Maximum Players, shouldn't need to change this
maxPlayers = 88;

};

// Include a picture to be used on mission select screen. To link to a picture in the mission pbo just include the filename and path relative to the mission folder, ie if "mypic.paa" is in the root mission folder (where the mission.sqm is) you would use "mypic.paa" if it was in a folder named "img" use "img\mypic.paa", etc...
overviewPicture = "\socomd_missions\images\missionpicture.paa";

// Include a short description and units required to play the mission if nessisary
overviewText = "SOCOMD Mission<br />Commandos: Up to 3 Platoons with HQ elements and attachments<br /><br />171st Squadron: Pilots and co-pilots<br /><br />";

// This header text will be displayed as people are loading the mission
OnLoadName = "OP Shadow Raider";

// This description text will be displayed as people are loading the mission, keep it relatively short
OnLoadMission = "Silent Shield PMC PTY LTD - A SOCOMD COMPANY";

// You can use another picture here while it is loading, see "overviewPicture" above on how to include it
loadScreen = "\socomd_missions\images\missionpicture.paa";

// Things for the future
class CfgMusic 
{ 
tracks[]={}; 
class music2
{ name = ""; sound[] = {\music\m1.ogg, db+1, 1.0}; 
}; 

};