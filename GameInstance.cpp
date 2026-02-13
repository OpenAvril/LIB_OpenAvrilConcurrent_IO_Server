#include "pch.h"

std::vector<class OpenAvril::Player*> _player;
class OpenAvril::Settings* _settings;

OpenAvril::GameInstance::GameInstance()
{
	_player.resize(2);
	Set_settings(new class OpenAvril::Settings());
	while (Get_settings() == NULL) {}
}

OpenAvril::GameInstance::~GameInstance()
{
}

OpenAvril::Player* OpenAvril::GameInstance::Get_player(__int8 playerId)
{
	return _player.at(playerId);
}

OpenAvril::Settings* OpenAvril::GameInstance::Get_settings()
{
	return _settings;
}

void OpenAvril::GameInstance::Set_player(class OpenAvril::Player* player)
{
	_player.push_back(player);
}

void OpenAvril::GameInstance::Set_settings(class OpenAvril::Settings* settings)
{
	_settings = settings;
}
