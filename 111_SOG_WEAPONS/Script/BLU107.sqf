_blu107 = _this select 0;
_blu107zpos = getpos _blu107 select 2;
_pb = _blu107 call BIS_fnc_getPitchBank;

if (not alive _blu107 and _blu107zpos < 50) exitwith {};
sleep 0.03;


while {_blu107zpos > 50} do
{
	_blu107zpos = getpos _blu107 select 2;
	sleep 0.03;
	_pb = _blu107 call BIS_fnc_getPitchBank;
};

_pitch = _pb select 0;
_bank = _pb select 1;

_blu107speed = velocity _blu107;
_blu107pos = getpos _blu107;
_blu107dir = getdir _blu107;

deletevehicle _blu107;

_sub = "FIR_blu107_shoot" createvehicle _blu107pos;

[_sub, _pitch, _bank] call BIS_fnc_setPitchBank;

_subpos = getpos _sub;
_subdir = getdir _sub;
_subvel = velocity _sub;
_subspeed = 50;

_sub setdir _blu107dir;
_sub say "FIR_RocketSound";
_sub setvelocity _blu107speed;

/*_sub setvelocity [((_blu107speed select 0) * cos(_subdir)) + ((_blu107speed select 1) * sin(_subdir)) * 1, ((_blu107speed select 0) * sin(_subdir)) + ((_blu107speed select 1) * cos(_subdir)) * 1, (_blu107speed select 2) * 20];*/
/*_sub setVelocity [(((vectorDir _sub) select 0) * 100), (((vectorDir _sub) select 1) * 100), (((vectorDir _sub) select 2) * 100)];*/
/*_sub setVelocity [(_subvel select 0) + (sin _subdir * _subspeed), (_subvel select 1) + (cos _subdir * _subspeed), (_subvel select 2)];*/

[_sub, _pitch, _bank] call BIS_fnc_setPitchBank;
while {alive _sub} do
{
	_subpos = getpos _sub;
};

_isWater = surfaceIsWater _subpos;

if(_isWater) ExitWith{};

_range = 15;

sleep 1;
for [{_i=0}, {_i < 8}, {_i=_i+1}] do
{
	_radius = random (_range)-(_range/2);
	_c_dir = random 360;
	_crater = "CraterLong" createvehicle _subpos;
	_crater setpos [(getpos _crater select 0)+_radius , (getpos _crater select 1)+_radius , (getpos _crater select 2)]; 
	_crater setdir _c_dir;
};
