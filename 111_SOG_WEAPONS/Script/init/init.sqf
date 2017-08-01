/*init script by Firewill*/
_aircraft = _this select 0;

if (!local _aircraft) exitwith{};


_TWAS = {_x == "FIR_TWASPod_1rnd_M"} count magazines _aircraft;
_TWAS2 = {_x == "FIR_TWASPod_Red_1rnd_M"} count magazines _aircraft;

if (_TWAS > 0 or _TWAS2 > 0) then
{
	_index = _aircraft addMPEventHandler ["MPHit", {Null = [_this] execVM "FIR_aircraft\sqs\init\TWAS.sqf";}]; 
}
else
{
	_aircraft removeMPEventHandler ["MPHit", 0]; 
};
