#pragma once

namespace OpenAvril
{
	class User_Alg
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		User_Alg();

// destructor.
		virtual ~User_Alg();

// public.
	// get.
		class Praise0_Algorithm* Get_Praise0_Algorithm();
		class Praise1_Algorithm* Get_Praise1_Algorithm();
		class Praise2_Algorithm* Get_Praise2_Algorithm();
	// set.

	private:
// private.
		void Create_Praise0_Algorithm();
		void Create_Praise1_Algorithm();
		void Create_Praise2_Algorithm();
	// get.
	// set.
		void Set_Praise0_Algorithm(class Praise0_Algorithm* praise0_A);
		void Set_Praise1_Algorithm(class Praise1_Algorithm* praise1_A);
		void Set_Praise2_Algorithm(class Praise2_Algorithm* praise2_A);
	};
}

