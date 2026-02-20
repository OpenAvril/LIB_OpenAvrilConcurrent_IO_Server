#pragma once

namespace OpenAvril
{
	class FirstPersonCamera
	{
	public:
		FirstPersonCamera();
		virtual ~FirstPersonCamera();

		void Update_Pitch(float deltaDegY);
		void Update_Yaw(float deltaDegX);
		void UpdateVectors(float pitch, float yaw);

		Eigen::Vector3d get_offset();
		float get_pitch();
		float get_yaw();
		Eigen::Vector3d get_fowards();
		Eigen::Vector3d get_up();
		Eigen::Vector3d get_right();

		void set_offset(Eigen::Vector3d offset);
		void set_pitch(float pitch);
		void set_yaw(float yaw);
		void set_fowards(Eigen::Vector3d fowards);
		void set_up(Eigen::Vector3d up);
		void set_right(Eigen::Vector3d right);

	private:

	};
}