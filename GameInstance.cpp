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
		create_ptr_Settings();
		create_vector_Of_player();
	}

// destructor.
	OpenAvril::GameInstance::~GameInstance()
	{
		delete _ptr_Settings;
		delete _ptr_vector_Of_player;
	}

// public.
	// get.
	OpenAvril::Settings* OpenAvril::GameInstance::get_ptr_Settings()
{
	return _ptr_Settings;
}
	class OpenAvril::Player* OpenAvril::GameInstance::get_Item_On_ptr_vector_Of_player(__int8 playerId)
{
	auto temp = get_ptr_vector_Of_player()->begin();
	std::advance(temp, playerId);
	return *temp;
}
	// set.

// private.
	void OpenAvril::GameInstance::create_ptr_Settings()
{
	set_settings(new class OpenAvril::Settings());
	while (get_settings() == NULL) {}
}
	void OpenAvril::GameInstance::create_ptr_vector_Of_player()
{
	_ptr_vector_Of_player = &_vector_Of_player;
}
	void OpenAvril::GameInstance::create_vector_Of_player()
{
	std::vector<class OpenAvril::Player*> _vector_Of_player = { NULL, NULL };
	OpenAvril::Player* newTemp = new class OpenAvril::Player();
	while (newTemp == NULL) {}
	std::vector<class OpenAvril::Player*> _vector_Of_stack_Of_InputPraise = { newTemp, newTemp };
	create_ptr_vector_Of_player();
	for (__int8 index = 0; index < sizeof(get_ptr_vector_Of_player()); index++)
	{
		while (get_Item_On_ptr_vector_Of_player(index) == NULL) {}
	}
	delete newTemp;
}
	// get.
	std::vector<class OpenAvril::Player*>* OpenAvril::GameInstance::get_ptr_vector_Of_player()
{
	return _ptr_vector_Of_player;
}
	// set.
	void OpenAvril::GameInstance::set_ptr_Settings(class OpenAvril::Settings* settings)
{
	_ptr_Settings = settings;
}