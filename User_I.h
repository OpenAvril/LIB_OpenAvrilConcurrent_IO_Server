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
		class Praise0_Input* Get_Praise0_Input();
		class Praise1_Input* Get_Praise1_Input();
		class Praise2_Input* Get_Praise2_Input();
	// set.

	private:
// private.
		void Create_Praise0_Input();
		void Create_Praise1_Input();
		void Create_Praise2_Input();
	// get.
	// set.
		void Set_Praise0_Input(class Praise0_Input* praise0_I);
		void Set_Praise1_Input(class Praise1_Input* praise1_I);
		void Set_Praise2_Input(class Praise2_Input* praise2_I);
	};
}