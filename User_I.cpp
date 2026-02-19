#include "pch.h"
// calsses.

// registers.
	OpenAvril::Praise0_Input* ptr_Praise0_Input = NULL;
	OpenAvril::Praise1_Input* ptr_Praise1_Input = NULL;
	OpenAvril::Praise2_Input* ptr_Praise2_Input = NULL;

// constructor.
	OpenAvril::User_I::User_I()
	{
		Create_Praise0_Input();
		Create_Praise2_Input();
		Create_Praise2_Input();
	}

// destructor.
	OpenAvril::User_I::~User_I()
	{
		delete ptr_Praise0_Input;
		delete ptr_Praise1_Input;
		delete ptr_Praise2_Input;
	}

// public.
	// get.
	OpenAvril::Praise0_Input* OpenAvril::User_I::Get_Praise0_Input()
	{
		return ptr_Praise0_Input;
	}
	OpenAvril::Praise1_Input* OpenAvril::User_I::Get_Praise1_Input()
	{
		return ptr_Praise1_Input;
	}
	OpenAvril::Praise2_Input* OpenAvril::User_I::Get_Praise2_Input()
	{
		return ptr_Praise2_Input;
	}
	// set.

// private.
	void OpenAvril::User_I::Create_Praise0_Input()
	{
		Set_Praise0_Input(new class OpenAvril::Praise0_Input());
		while (Get_Praise0_Input() == NULL) {}
	}
	void OpenAvril::User_I::Create_Praise1_Input()
	{
		Set_Praise1_Input(new class OpenAvril::Praise1_Input());
		while (Get_Praise1_Input() == NULL) {}
	}
	void OpenAvril::User_I::Create_Praise2_Input()
	{
		Set_Praise2_Input(new class OpenAvril::Praise2_Input());
		while (Get_Praise2_Input() == NULL) {}
	}
	// get.
	// set.
	void OpenAvril::User_I::Set_Praise0_Input(OpenAvril::Praise0_Input* praise0_I)
	{
		ptr_Praise0_Input = praise0_I;
	}
	void OpenAvril::User_I::Set_Praise1_Input(OpenAvril::Praise1_Input* praise1_I)
	{
		ptr_Praise1_Input = praise1_I;
	}
	void OpenAvril::User_I::Set_Praise2_Input(OpenAvril::Praise2_Input* praise2_I)
	{
		ptr_Praise2_Input = praise2_I;
	}