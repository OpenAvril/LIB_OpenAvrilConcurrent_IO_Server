#pragma once

namespace OpenAvril
{
	class Praise1_Input
	{
	public:
		Praise1_Input();
		virtual ~Praise1_Input();

		float get_mouse_X();
		float get_mouse_Y();

		void set_mouse_X(float value);
		void set_mouse_Y(float value);
	};
}