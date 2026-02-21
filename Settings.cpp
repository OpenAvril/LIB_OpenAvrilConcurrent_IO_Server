#include "pch.h"

// calsses.

// registers.
	float _fov;
	int _refreshRate;
	int _screenSize_X;
	int _screenSize_Y;
	bool _systemInitialised;

// constructor.
	OpenAvril::Settings::Settings()
	{
		create_fov();
		create_refreshRate();
		create_screenSize_X();
		create_screenSize_Y();
		create_systemInitialised();
		set_fov(45);
		set_refreshRate(144);
		set_screenSize_X(1920);
		set_screenSize_Y(1080);
		set_systemInitialised(false);
	}

// destructor.
	OpenAvril::Settings::~Settings()
	{

	}

// public.
	// get.
	float OpenAvril::Settings::get_fov()
	{
		return _fov;
	}
	int OpenAvril::Settings::get_refreshRate()
	{
		return _refreshRate;
	}
	bool OpenAvril::Settings::get_systemInitialised()
	{
		return _systemInitialised;
	}

	float OpenAvril::Settings::get_screenSize_X()
	{
		return _screenSize_X;
	}
	float OpenAvril::Settings::get_screenSize_Y()
	{
		return _screenSize_Y;
	}
	// set.

// private.
	void OpenAvril::Settings::create_fov()
	{
		set_fov(int(INT_MAX));
	}
	void OpenAvril::Settings::create_refreshRate()
	{
		set_refreshRate(int(INT_MAX));
	}
	void OpenAvril::Settings::create_screenSize_X()
	{
		set_screenSize_X(int(INT_MAX));
	}
	void OpenAvril::Settings::create_screenSize_Y()
	{
		set_screenSize_Y(int(INT_MAX));
	}
	void OpenAvril::Settings::create_systemInitialised()
	{
		set_systemInitialised(false);
	}
	// get.
	// set.
	void OpenAvril::Settings::set_fov(float fov)
	{
		_fov = fov;
	}
	void OpenAvril::Settings::set_refreshRate(int refreshRate)
	{
		_refreshRate = refreshRate;
	}
	void OpenAvril::Settings::set_systemInitialised(bool isSystemInitialised)
	{
		_systemInitialised = isSystemInitialised;
	}
	void OpenAvril::Settings::set_screenSize_X(float screenSize_X)
	{
		_screenSize_X = screenSize_X;
	}
	void OpenAvril::Settings::set_screenSize_Y(float screenSize_Y)
	{
		_screenSize_Y = screenSize_Y;
	}







