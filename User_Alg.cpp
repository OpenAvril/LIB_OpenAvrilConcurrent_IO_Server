#include "pch.h"

// classes.
	OpenAvril::Praise0_Algorithm* ptr_Praise0_Algorithm = NULL;
	OpenAvril::Praise1_Algorithm* ptr_Praise1_Algorithm = NULL;
	OpenAvril::Praise2_Algorithm* ptr_Praise2_Algorithm = NULL;

// registers.

// pointers.

// constructor.
	OpenAvril::User_Alg::User_Alg()
	{
		std::cout << "entered => User_Alg()" << std::endl;
		Create_Praise0_Algorithm();
		Create_Praise1_Algorithm();
		Create_Praise2_Algorithm();
		std::cout << "exiting => User_Alg()" << std::endl;
	}

// destructor.
	OpenAvril::User_Alg::~User_Alg()
{
	delete ptr_Praise0_Algorithm;
}

// public.
	// get.
	OpenAvril::Praise0_Algorithm* OpenAvril::User_Alg::Get_Praise0_Algorithm()
{
	return ptr_Praise0_Algorithm;
}
	OpenAvril::Praise1_Algorithm* OpenAvril::User_Alg::Get_Praise1_Algorithm()
{
	return ptr_Praise1_Algorithm;
}
	OpenAvril::Praise2_Algorithm* OpenAvril::User_Alg::Get_Praise2_Algorithm()
{
	return ptr_Praise2_Algorithm;
}
	// set.

// private.
	void OpenAvril::User_Alg::Create_Praise0_Algorithm()
{
	Set_Praise0_Algorithm(new class OpenAvril::Praise0_Algorithm());
	while (Get_Praise0_Algorithm() == NULL) {}
}
	void OpenAvril::User_Alg::Create_Praise1_Algorithm()
{
	Set_Praise1_Algorithm(new class OpenAvril::Praise1_Algorithm());
	while (Get_Praise1_Algorithm() == NULL) {}
}
	void OpenAvril::User_Alg::Create_Praise2_Algorithm()
{
	Set_Praise2_Algorithm(new class OpenAvril::Praise2_Algorithm());
	while (Get_Praise2_Algorithm() == NULL) {}
}
	// get.
	// set.
	void OpenAvril::User_Alg::Set_Praise0_Algorithm(OpenAvril::Praise0_Algorithm* praise0_A)
{
	ptr_Praise0_Algorithm = praise0_A;
}
	void OpenAvril::User_Alg::Set_Praise1_Algorithm(OpenAvril::Praise1_Algorithm* praise1_A)
{
	ptr_Praise1_Algorithm = praise1_A;
}
	void OpenAvril::User_Alg::Set_Praise2_Algorithm(OpenAvril::Praise2_Algorithm* praise2_A)
{
	ptr_Praise2_Algorithm = praise2_A;
}