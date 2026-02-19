#pragma once

namespace OpenAvril
{
	class User_O
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		User_O();

// destructor.
		virtual ~User_O();

// public.
	// get.
		class Praise0_Output* Get_Praise0_Output();
		class Praise1_Output* Get_Praise1_Output();
		class Praise2_Output* Get_Praise2_Output();
	// set.

	private:
// private.
		void Create_Praise0_Output();
		void Create_Praise1_Output();
		void Create_Praise2_Output();
	// get.
	// set.
		void Set_Praise0_Output(class Praise0_Output* praise0_O);
		void Set_Praise1_Output(class Praise1_Output* praise1_O);
		void Set_Praise2_Output(class Praise2_Output* praise2_O);
	};
}