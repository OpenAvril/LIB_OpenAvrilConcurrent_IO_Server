#pragma once

namespace OpenAvril
{
	class Settings
	{
	public:
		Settings();
		virtual ~Settings();

		float get_fov();
		int get_refreshRate();
		bool get_systemInitialised();
		float get_screenSize_X();
		float get_screenSize_Y();

		void set_fov(float fov);
		void set_refreshRate(int refreshRate);
		void set_systemInitialised(bool isSystemInitialised);
		void set_screenSize_X(float screenSize_X);
		void set_screenSize_Y(float screenSize_Y);
	};
}

