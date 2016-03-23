#pragma once
#include "Item.h"
class CCharacter
{
private:
	enum state{NoInit = -10};
	int m_grade, m_level;
	int m_att, m_def, m_hp;
	std::string m_name;
	std::list<CItem> m_lequipment;

public:
	CCharacter(void);
	~CCharacter(void);
};

