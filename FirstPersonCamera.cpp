#include "pch.h"

const double PI = 3.14159265358979323846;

Eigen::Vector3d _offset = {0, 1, 0};
float _pitch;
float _yaw;
Eigen::Vector3d _camera_fowards = { 1, 0, 0 };
Eigen::Vector3d _camera_up = { 0, 1, 0 };
Eigen::Vector3d _camera_right = { 0, 0, 1 };

OpenAvril::FirstPersonCamera::FirstPersonCamera()
{

}

OpenAvril::FirstPersonCamera::~FirstPersonCamera()
{

}

void OpenAvril::FirstPersonCamera::Update_Pitch(float deltaDegY)
{
    set_pitch(get_pitch() + (float)((PI / 180) * deltaDegY));
    if (get_pitch() > (float)(PI / 180) * 85)
    {
        set_pitch((float)(PI / 180) * 85);
    }
    if (get_pitch() <= (PI / 180) * -85)
    {
        set_pitch((float)(PI / 180) * -85);
    }
}
void OpenAvril::FirstPersonCamera::Update_Yaw(float deltaDegX)
{
    set_yaw(get_yaw() + (float)((PI / 180) * deltaDegX));
    if (get_yaw() > (float)(PI / 180) * 180)
    {
        set_yaw(get_yaw() - (float)(PI * 2));
    }
    if (get_yaw() <= (PI / 180) * -180)
    {
        set_yaw(get_yaw() + (float)(PI * 2));
    }
}
void OpenAvril::FirstPersonCamera::UpdateVectors(float pitch, float yaw)
{
    _camera_fowards = { (float)(cos(pitch) * cos(yaw)), (float)(sin(pitch)), (float)(cos(pitch) * sin(yaw)) };

    _camera_up = {0, 1, 0};

    _camera_right = _camera_fowards.cross(_camera_up);
}

Eigen::Vector3d OpenAvril::FirstPersonCamera::get_offset()
{
	return _offset;
}
float OpenAvril::FirstPersonCamera::get_pitch()
{
	return _pitch;
}
float OpenAvril::FirstPersonCamera::get_yaw()
{
	return _yaw;
}
Eigen::Vector3d OpenAvril::FirstPersonCamera::get_fowards()
{
	return _camera_fowards;
}
Eigen::Vector3d OpenAvril::FirstPersonCamera::get_up()
{
	return _camera_up;
}
Eigen::Vector3d OpenAvril::FirstPersonCamera::get_right()
{
	return _camera_right;
}

void OpenAvril::FirstPersonCamera::set_offset(Eigen::Vector3d offset)
{
	_offset = offset;
}
void OpenAvril::FirstPersonCamera::set_pitch(float pitch)
{
	_pitch = pitch;
}
void OpenAvril::FirstPersonCamera::set_yaw(float yaw)
{
	_yaw = yaw;
}
void OpenAvril::FirstPersonCamera::set_fowards(Eigen::Vector3d fowards)
{
	_camera_fowards = fowards;
}
void OpenAvril::FirstPersonCamera::set_up(Eigen::Vector3d up)
{
	_camera_up = up;
}
void OpenAvril::FirstPersonCamera::set_right(Eigen::Vector3d right)
{
	_camera_right = right;
}