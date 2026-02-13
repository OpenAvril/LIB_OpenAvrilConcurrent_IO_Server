#include "pch.h"

float mouse_X;
float mouse_Y;

OpenAvril::Praise1_Input::Praise1_Input()
{

}

OpenAvril::Praise1_Input::~Praise1_Input()
{
}
float OpenAvril::Praise1_Input::Get_mouse_X()
{
	return mouse_X;
}
float OpenAvril::Praise1_Input::Get_mouse_Y()
{
	return mouse_Y;
}
void OpenAvril::Praise1_Input::Set_mouse_X(float value)
{
	mouse_X = value;
}
void OpenAvril::Praise1_Input::Set_mouse_Y(float value)
{
	mouse_Y = value;
}