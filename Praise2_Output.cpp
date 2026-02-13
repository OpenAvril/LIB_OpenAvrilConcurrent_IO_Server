#include "pch.h"

std::vector<float> _out2_position;
std::vector<float> _out2_fowards;
std::vector<float> _out2_right;
std::vector<float> _out2_up;

OpenAvril::Praise2_Output::Praise2_Output()
{

}

OpenAvril::Praise2_Output::~Praise2_Output()
{
}

std::vector<float> OpenAvril::Praise2_Output::GetPosition()
{
	return _out2_position;
}

std::vector<float> OpenAvril::Praise2_Output::GetFowards()
{
	return _out2_fowards;
}

std::vector<float> OpenAvril::Praise2_Output::GetUp()
{
	return _out2_up;
}

std::vector<float> OpenAvril::Praise2_Output::GetRight()
{
	return _out2_right;
}

void OpenAvril::Praise2_Output::SetPosition(std::vector<float> position)
{
	_out2_position = position;
}

void OpenAvril::Praise2_Output::SetFowards(std::vector<float> fowards)
{
	_out2_fowards = fowards;
}

void OpenAvril::Praise2_Output::SetUp(std::vector<float> up)
{
	_out2_up = up;
}

void OpenAvril::Praise2_Output::SetRight(std::vector<float> right)
{
	_out2_right = right;
}
