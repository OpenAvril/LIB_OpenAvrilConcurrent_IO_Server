#include "pch.h"

// classes.
	class OpenAvril::Settings* _ptr_Settings = NULL;

// registers.
	std::vector<class OpenAvril::Player*> _vector_Of_player = { NULL };

// pointers.
	std::vector<class OpenAvril::Player*>* _ptr_vector_Of_player = NULL;

// constructor.
	OpenAvril::GameInstance::GameInstance()
	{
		Create_ptr_Settings();
		Create_vector_Of_player();
	}

// destructor.
	OpenAvril::GameInstance::~GameInstance()
	{
		delete _ptr_Settings;
		delete _ptr_vector_Of_player;
	}

// public.
	// get.
	OpenAvril::Settings* OpenAvril::GameInstance::Get_ptr_Settings()
{
	return _ptr_Settings;
}
	class OpenAvril::Player* OpenAvril::GameInstance::Get_Item_On_ptr_vector_Of_player(__int8 playerId)
{
	auto temp = Get_ptr_vector_Of_player()->begin();
	std::advance(temp, playerId);
	return *temp;
}
	// set.

// private.
	void OpenAvril::GameInstance::Create_ptr_Settings()
{
	Set_settings(new class OpenAvril::Settings());
	while (Get_settings() == NULL) {}
}
	void OpenAvril::GameInstance::Create_ptr_vector_Of_player()
{
	_ptr_vector_Of_player = &_vector_Of_player;
}
	void OpenAvril::GameInstance::Create_vector_Of_player()
{
	std::vector<class OpenAvril::Player*> _vector_Of_player = { NULL, NULL };
	OpenAvril::Player* newTemp = new class OpenAvril::Player();
	while (newTemp == NULL) {}
	std::vector<class OpenAvril::Player*> _vector_Of_stack_Of_InputPraise = { newTemp, newTemp };
	Create_ptr_vector_Of_player();
	for (__int8 index = 0; index < sizeof(Get_ptr_vector_Of_player()); index++)
	{
		while (Get_Item_On_ptr_vector_Of_player(index) == NULL) {}
	}
	delete newTemp;
}
	// get.
	std::vector<class OpenAvril::Player*>* OpenAvril::GameInstance::Get_ptr_vector_Of_player()
{
	return _ptr_vector_Of_player;
}
	// set.
	void OpenAvril::GameInstance::Set_ptr_Settings(class OpenAvril::Settings* settings)
{
	_ptr_Settings = settings;
}