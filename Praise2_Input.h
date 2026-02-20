#pragma once

namespace OpenAvril
{
	class Praise2_Input
	{
	public:
		Praise2_Input();
		virtual ~Praise2_Input();

		bool get_fowards();
		bool get_backwards();
		bool get_left();
		bool get_right();
		float get_period();

		void set_fowards(bool value);
		void set_backwards(bool value);
		void set_left(bool value);
		void set_right(bool value);
		void set_period(float value);
	};
}