// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
	class CBA
	{
		class Network
		{
			// CBA_fnc_getMarkerPersistent
			class getMarkerPersistent
			{
				description = "Checks if a global marker is persistent for JIP players.";
				file = "\x\cba\addons\network\fnc_getMarkerPersistent.sqf";
			};
			// CBA_fnc_globalExecute
			class globalExecute
			{
				description = "Executes code on given destinations";
				file = "\x\cba\addons\network\fnc_globalExecute.sqf";
			};
			// CBA_fnc_globalSay
			class globalSay
			{
				description = "Says sound on all client computer";
				file = "\x\cba\addons\network\fnc_globalSay.sqf";
			};
			// CBA_fnc_globalSay3d
			class globalSay3d
			{
				description = "Says sound on all client computer in 3d";
				file = "\x\cba\addons\network\fnc_globalSay3d.sqf";
			};
			// CBA_fnc_publicVariable
			class publicVariable
			{
				description = "CBA_fnc_publicVariable does only broadcast the new value if it doesn't exist in missionNamespace or the new value is different to the one in missionNamespace. Checks also for different types. Nil as value gets always broadcasted.";
				file = "\x\cba\addons\network\fnc_publicVariable.sqf";
			};
			// CBA_fnc_setMarkerPersistent
			class setMarkerPersistent
			{
				description = "Sets or unsets JIP persistency on a global marker.";
				file = "\x\cba\addons\network\fnc_setMarkerPersistent.sqf";
			};
			// CBA_fnc_setVarNet
			class setVarNet
			{
				description = "Same as setVariable [""name"",var, true] but only broadcasts when the value of var is different to the one which is already saved in the variable space. Checks also for different types. Nil as value gets always broadcasted.";
				file = "\x\cba\addons\network\fnc_setVarNet.sqf";
			};
		};
	};
};
