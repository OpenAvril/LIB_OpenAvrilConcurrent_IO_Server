#include "pch.h"

class OpenAvril::FirstPersonCamera* _camera_FP;

bool _isFirstMove;
bool _isFirstMouseMove;
bool _cameraSelector;
float _cameraSpeed;
float _sensitivity;
std::vector<float> _player_Position;
std::vector<float> _player_mouse_Position;
Eigen::Vector3d _player_front;
Eigen::Vector3d _player_right;
Eigen::Vector3d _player_up;

OpenAvril::Player::Player()
{
	set_camera_FP(new class OpenAvril::FirstPersonCamera());

	_isFirstMove = true;
	_isFirstMouseMove = false;
	_player_Position = { 0.0, 0.0, 0.0 };
	_player_mouse_Position = { 0.0, 0.0 };
	_player_front = { 0.0, 0.0, 0.0 };
	_player_right = { 0.0, 0.0, 0.0 };
	_player_up = { 0.0, 0.0, 0.0 };
	_cameraSelector = false;
	_cameraSpeed = 1.5f;
	_sensitivity = 0.2f;
}
OpenAvril::Player::~Player()
{
}

OpenAvril::FirstPersonCamera* OpenAvril::Player::get_camera_FP()
{
	return _camera_FP;
}

bool OpenAvril::Player::get_isFirstMove()
{
	return _isFirstMove;
}
bool OpenAvril::Player::get_isFirstMouseMove()
{
	return _isFirstMouseMove;
}
bool OpenAvril::Player::get_cameraSelector()
{
	return _cameraSelector;
}
float OpenAvril::Player::get_cameraSpeed()
{
	return _cameraSpeed;
}
float OpenAvril::Player::get_sensitivity()
{
	return _sensitivity;
}
std::vector<float> OpenAvril::Player::get_player_Position()
{
	return _player_Position;
}
std::vector<float> OpenAvril::Player::get_mouse_Position()
{
	return _player_mouse_Position;
}

Eigen::Vector3d OpenAvril::Player::get_Front()
{
	return _player_front;
}
Eigen::Vector3d OpenAvril::Player::get_Right()
{
	return _player_right;
}
Eigen::Vector3d OpenAvril::Player::get_Up()
{
	return _player_up;
}

void OpenAvril::Player::set_camera_FP(OpenAvril::FirstPersonCamera* camera)
{
	_camera_FP = camera;
}
void OpenAvril::Player::set_isFirstMove(bool value)
{
	_isFirstMove = value;
}

void OpenAvril::Player::set_isFirstMouseMove(bool value)
{
	_isFirstMouseMove = value;
}

void OpenAvril::Player::set_cameraSpeed(float cameraSpeed)
{
	_cameraSpeed = cameraSpeed;
}

void OpenAvril::Player::set_sensitivity(float sensitivity)
{
	_sensitivity = sensitivity;
}

void OpenAvril::Player::set_player_Position_X(float position_X)
{
	_player_Position.at(0) = position_X;
}
void OpenAvril::Player::set_player_Position_Y(float position_Y)
{
	_player_Position.at(1) = position_Y;
}
void OpenAvril::Player::set_player_Position_Z(float position_Z)
{
	_player_Position.at(2) = position_Z;
}
void OpenAvril::Player::set_mouse_Position_X(float position_X)
{
	_player_mouse_Position.at(0) = position_X;
}
void OpenAvril::Player::set_mouse_Position_Y(float position_Y)
{
	_player_mouse_Position.at(1) = position_Y;
}

void OpenAvril::Player::set_front(Eigen::Vector3d front)
{
	_player_front = front;
}

void OpenAvril::Player::set_right(Eigen::Vector3d right)
{
	_player_right = right;
}

void OpenAvril::Player::set_up(Eigen::Vector3d up)
{
	_player_up = up;
}