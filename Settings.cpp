#include "pch.h"

float _fov;
int _refreshRate;
bool _systemInitialised;
float _screenSize_X;
float _screenSize_Y;

OpenAvril::Settings::Settings()
{
	_fov = 45;
	_refreshRate = 144;
	_systemInitialised = false;
	_screenSize_X = (float)1920;
	_screenSize_Y = (float)1080;
}

OpenAvril::Settings::~Settings()
{
}

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
