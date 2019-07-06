params ["_vehicle"];

// object addAction [title, script, arguments, priority, showWindow, hideOnUse, shortcut, condition, radius, unconscious, selection, memoryPoint] 
_startFlare = _vehicle addAction 
[
    "Ativar Flare", 
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
	
	_flare = "F_40mm_White" createvehicle ((_caller) ModelToWorld [0,0,160]);  
	_flare setVelocity [0,0,-5];
	_caller removeMagazine "UGL_FlareWhite_F";
	hint "Flare lançado";

    },
    [],
    1.5, 
    false, 
    true, 
    "",
    "(typeof vehicle _this) find 'A3CN_LSV' >=0 && {_x == 'UGL_FlareWhite_F'}count magazineCargo _this > 0", // _target, _this, _originalTarget
    50,
    false,
    "",
    ""
];
_vehicle setUserActionText [_startFlare, "<img size='2' image='\a3\ui_f\data\IGUI\Cfg\TacticalDisplay\targetlasertexture_gs'/> Lançar Flare"];
