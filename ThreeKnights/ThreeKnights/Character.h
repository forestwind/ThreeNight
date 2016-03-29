#pragma once
#include "Item.h"
class CCharacter
{
private:
	enum state{NoInit = -10};
	
	
	std::list<CItem> m_lequipment;		// ������ ������ ����Ʈ

public:
	void Set_Item(const CItem&);		// ĳ���Ͱ� ������ ������ ����(�κ��丮 ����� �����غ��ߵ�)
	void Print_Info();					// ĳ���� ���� ���(���� ���� ��ġ, ������ ���� ǥ��)
	void Attack(CCharacter&);
	CCharacter(void);
	~CCharacter(void);


	std::string m_name;
	int m_grade, m_level;
	int m_att, m_def, m_hp;
	int m_index , m_speed ;
	
};

