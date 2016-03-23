#pragma once
#include "Item.h"
class CCharacter
{
private:
	enum state{NoInit = -10};
	int m_grade, m_level;
	int m_att, m_def, m_hp;
	std::string m_name;
	std::list<CItem> m_lequipment;		// ������ ������ ����Ʈ

public:
	void Set_Item(const CItem&);		// ĳ���Ͱ� ������ ������ ����(�κ��丮 ����� �����غ��ߵ�)
	void Print_Info();					// ĳ���� ���� ���(���� ���� ��ġ, ������ ���� ǥ��)
	CCharacter(void);
	~CCharacter(void);
};

