#include "pch.h"
// calsses.
	class OpenAvril::Praise0_Output* ptr_Praise0_Output = NULL;
	class OpenAvril::Praise1_Output* ptr_Praise1_Output = NULL;
	class OpenAvril::Praise2_Output* ptr_Praise2_Output = NULL;

// registers.

// pointers.

// constructor.
	OpenAvril::User_O::User_O()
	{
		create_Praise0_Output();
		create_Praise1_Output();
		create_Praise2_Output();
	}

// destructor.
	OpenAvril::User_O::~User_O()
	{
		delete ptr_Praise0_Output;
		delete ptr_Praise1_Output;
		delete ptr_Praise2_Output;
	}

// public.
	// get.
	class OpenAvril::Praise0_Output* OpenAvril::User_O::get_Praise0_Output()
	{
		return ptr_Praise0_Output;
	}
	class OpenAvril::Praise1_Output* OpenAvril::User_O::get_Praise1_Output()
	{
		return ptr_Praise1_Output;
	}
	class OpenAvril::Praise2_Output* OpenAvril::User_O::get_Praise2_Output()
	{
		return ptr_Praise2_Output;
	}
	// set.

// private.
	void OpenAvril::User_O::create_Praise0_Output()
	{
		set_Praise0_Output(new class OpenAvril::Praise0_Output());
		while (get_Praise0_Output() == NULL) {}
	}
	void OpenAvril::User_O::create_Praise1_Output()
	{
		set_Praise1_Output(new class OpenAvril::Praise1_Output());
		while (get_Praise1_Output() == NULL) {}
	}
	void OpenAvril::User_O::create_Praise2_Output()
	{
		set_Praise2_Output(new class OpenAvril::Praise2_Output());
		while (get_Praise2_Output() == NULL) {}
	}
	// get.
	// set.
	void OpenAvril::User_O::set_Praise0_Output(OpenAvril::Praise0_Output* praise0_O)
	{
		ptr_Praise0_Output = praise0_O;
	}
	void OpenAvril::User_O::set_Praise1_Output(OpenAvril::Praise1_Output* praise1_O)
	{
		ptr_Praise1_Output = praise1_O;
	}
	void OpenAvril::User_O::set_Praise2_Output(OpenAvril::Praise2_Output* praise2_O)
	{
		ptr_Praise2_Output = praise2_O;
}