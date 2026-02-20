#include "pch.h"

bool _fowards;
bool _backwards;
bool _left;
bool _right;
float period;

OpenAvril::Praise2_Input::Praise2_Input()
{
	_fowards = false;
	_backwards = false;
	_left = false;
	_right = false;
	period = 0;
}

OpenAvril::Praise2_Input::~Praise2_Input()
{

}
	
bool OpenAvril::Praise2_Input::get_fowards()
{
	return _fowards;
}
bool OpenAvril::Praise2_Input::get_backwards()
{
	return _backwards;
}
bool OpenAvril::Praise2_Input::get_left()
{
	return _left;
}
bool OpenAvril::Praise2_Input::get_right()
{
	return _right;
}
float OpenAvril::Praise2_Input::get_period()
{
	return period;
}
void OpenAvril::Praise2_Input::set_fowards(bool value)
{
	_fowards = value;
}
void OpenAvril::Praise2_Input::set_backwards(bool value)
{
	_backwards = value;
}
void OpenAvril::Praise2_Input::set_left(bool value)
{
	_left = value;
}
void OpenAvril::Praise2_Input::set_right(bool value)
{
	_right = value;
}
void OpenAvril::Praise2_Input::set_period(float value)
{
	period = value;
}