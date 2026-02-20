#pragma once

namespace OpenAvril
{
	class User_I
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		User_I();

// destructor.
		virtual ~User_I();

// public.
	// get.
		class Praise0_Input* get_Praise0_Input();
		class Praise1_Input* get_Praise1_Input();
		class Praise2_Input* get_Praise2_Input();
	// set.

	private:
// private.
		void create_Praise0_Input();
		void create_Praise1_Input();
		void create_Praise2_Input();
	// get.
	// set.
		void set_Praise0_Input(class Praise0_Input* praise0_I);
		void set_Praise1_Input(class Praise1_Input* praise1_I);
		void set_Praise2_Input(class Praise2_Input* praise2_I);
	};
}