private ["_subpos","_wp_rkt","_wp_rktzpos","_smoke_color","_color","_Smoke"];

_wp_rkt = _this select 0;
_wp_rktzpos = getpos _wp_rkt select 2;

while {alive _wp_rkt} do
{
	_subpos = getpos _wp_rkt;
};

_isWater = surfaceIsWater _subpos;

if(_isWater) ExitWith{};

_manlist = _subpos nearEntities ["Man", 15];
_manlist_c = count _manlist;



for [{_i=0}, {_i < _manlist_c}, {_i=_i+1}] do
{
	_victim = _manlist select _i;
	_scr = [_victim] execVM "111_SOG_Weapons\Script\WP_Dam.sqf";
};
