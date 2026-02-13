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
	Set_camera_FP(new class OpenAvril::FirstPersonCamera());

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

OpenAvril::FirstPersonCamera* OpenAvril::Player::Get_camera_FP()
{
	return _camera_FP;
}

bool OpenAvril::Player::Get_isFirstMove()
{
	return _isFirstMove;
}
bool OpenAvril::Player::Get_isFirstMouseMove()
{
	return _isFirstMouseMove;
}
bool OpenAvril::Player::Get_cameraSelector()
{
	return _cameraSelector;
}
float OpenAvril::Player::Get_cameraSpeed()
{
	return _cameraSpeed;
}
float OpenAvril::Player::Get_sensitivity()
{
	return _sensitivity;
}
std::vector<float> OpenAvril::Player::Get_player_Position()
{
	return _player_Position;
}
std::vector<float> OpenAvril::Player::Get_mouse_Position()
{
	return _player_mouse_Position;
}

Eigen::Vector3d OpenAvril::Player::Get_Front()
{
	return _player_front;
}
Eigen::Vector3d OpenAvril::Player::Get_Right()
{
	return _player_right;
}
Eigen::Vector3d OpenAvril::Player::Get_Up()
{
	return _player_up;
}

void OpenAvril::Player::Set_camera_FP(OpenAvril::FirstPersonCamera* camera)
{
	_camera_FP = camera;
}
void OpenAvril::Player::Set_isFirstMove(bool value)
{
	_isFirstMove = value;
}

void OpenAvril::Player::Set_isFirstMouseMove(bool value)
{
	_isFirstMouseMove = value;
}

void OpenAvril::Player::Set_cameraSpeed(float cameraSpeed)
{
	_cameraSpeed = cameraSpeed;
}

void OpenAvril::Player::Set_sensitivity(float sensitivity)
{
	_sensitivity = sensitivity;
}

void OpenAvril::Player::Set_player_Position_X(float position_X)
{
	_player_Position.at(0) = position_X;
}
void OpenAvril::Player::Set_player_Position_Y(float position_Y)
{
	_player_Position.at(1) = position_Y;
}
void OpenAvril::Player::Set_player_Position_Z(float position_Z)
{
	_player_Position.at(2) = position_Z;
}
void OpenAvril::Player::Set_mouse_Position_X(float position_X)
{
	_player_mouse_Position.at(0) = position_X;
}
void OpenAvril::Player::Set_mouse_Position_Y(float position_Y)
{
	_player_mouse_Position.at(1) = position_Y;
}

void OpenAvril::Player::Set_front(Eigen::Vector3d front)
{
	_player_front = front;
}

void OpenAvril::Player::Set_right(Eigen::Vector3d right)
{
	_player_right = right;
}

void OpenAvril::Player::Set_up(Eigen::Vector3d up)
{
	_player_up = up;
}