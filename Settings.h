#pragma once

namespace OpenAvril
{
	class Settings
	{
// calsses.

// registers.

	public:
// constructor.
		Settings();

// destructor.
		virtual ~Settings();

// public.
	// get.
		float get_fov();
		int get_refreshRate();
		float get_screenSize_X();
		float get_screenSize_Y();
		bool get_systemInitialised();
	// set.

// private.
		void create_fov();
		void create_refreshRate();
		void create_screenSize_X();
		void create_screenSize_Y();
		void create_systemInitialised();
	// get.
	// set.
		void set_fov(float newFOV);
		void set_refreshRate(int newRefreshRate);
		void set_screenSize_X(float newScreenWidth);
		void set_screenSize_Y(float newScreenHeight);
		void set_systemInitialised(bool init);
	};
}

