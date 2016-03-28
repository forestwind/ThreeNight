#pragma once

#include "Character.h"
#include "Item.h"

class CPlayer
{
private:
	int m_playerLevel;
	int m_playerExp;
	
	std::string m_playerName;

	std::list<CCharacter> m_lCharacter;
	std::list<CItem> m_lItem;

public:
	CPlayer();
	CPlayer(const int m_playerLevel, const int m_playerExp, const std::string m_playerName);
	~CPlayer(void);

	void init();

	void set_player_name(const std::string m_playerName);

	void showInformation();


};

