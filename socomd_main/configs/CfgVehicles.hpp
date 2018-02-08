class NoDust{};

class CfgVehicles 
{
	//MAN
	class Man;
	class Civilian;
	class O_helipilot_F;
	class B_Soldier_02_f;
	class B_Soldier_05_f;
	class I_Soldier_04_F;
	class B_Diver_F;

	class Car;
	class Car_F : Car
	{
		class HitPoints;		
	};

	//LAND
	/*class bma3_bushmaster_base_F : Car_F
	{
		class HitPoints : HitPoints
		{
			//Left Wheels
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLBWheel;
			class HitLMWheel;

			//Right Wheels
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRBWheel;
			class HitRMWheel;
		};
	};*/
	class B_Quadbike_01_F;
	class Bicycle;

	//AIR
	class Helicopter;


	//SEA
	class B_Boat_Transport_01_F;

	//BACKPACKS
	//class tf_rt1523g_big_bwmod;
	class B_Kitbag_Base;

	//AMMOBOX
	class NATO_Box_Base;
	class Box_NATO_AmmoVeh_F;
	
	//FLAGS
	class FLAG_NATO_F;
	class FLAG_CSAT_F;
		
	#include "vehicles\fixes.hpp"
	#include "vehicles\land.hpp"
	#include "vehicles\air.hpp"
	#include "vehicles\ship.hpp"
	#include "vehicles\backpacks.hpp"
	#include "vehicles\men.hpp"
	#include "vehicles\boxes.hpp"
	#include "vehicles\other.hpp"
	#include "vehicles\taki_insurgents.hpp"

};
