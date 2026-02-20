#pragma once

namespace OpenAvril
{
    class Player
    {
    public:
        Player();
        virtual ~Player();
		class FirstPersonCamera* get_camera_FP();
		bool get_isFirstMove();
		bool get_isFirstMouseMove();
		bool get_cameraSelector();
		float get_cameraSpeed();
		float get_sensitivity();

		std::vector<float> get_player_Position();
		Eigen::Vector3d get_Front();
		Eigen::Vector3d get_Right();
		Eigen::Vector3d get_Up();
		std::vector<float> get_mouse_Position();

		void set_camera_FP(FirstPersonCamera* camera);
		void set_isFirstMove(bool value);
		void set_isFirstMouseMove(bool value);
		void set_cameraSpeed(float cameraSpeed);
		void set_sensitivity(float sensitivity);

		void set_player_Position_X(float position_X);
		void set_player_Position_Y(float position_Y);
		void set_player_Position_Z(float position_Z);
		void set_mouse_Position_X(float position_Y);
		void set_mouse_Position_Y(float position_Y);
		void set_front(Eigen::Vector3d front);
		void set_right(Eigen::Vector3d right);
		void set_up(Eigen::Vector3d up);
    };
}