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
		class Praise0_Output* get_Praise0_Output();
		class Praise1_Output* get_Praise1_Output();
		class Praise2_Output* get_Praise2_Output();
	// set.

	private:
// private.
		void create_Praise0_Output();
		void create_Praise1_Output();
		void create_Praise2_Output();
	// get.
	// set.
		void set_Praise0_Output(class Praise0_Output* praise0_O);
		void set_Praise1_Output(class Praise1_Output* praise1_O);
		void set_Praise2_Output(class Praise2_Output* praise2_O);
	};
}