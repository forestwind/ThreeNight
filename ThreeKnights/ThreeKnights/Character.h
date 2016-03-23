#pragma once
#include "Item.h"
class CCharacter
{
private:
	enum state{NoInit = -10};
	int m_grade, m_level;
	int m_att, m_def, m_hp;
	std::string m_name;
	std::list<CItem> m_lequipment;		// 아이템 장착할 리스트

public:
	void Set_Item(const CItem&);		// 캐릭터가 착용할 아이템 설정(인벤토리 설계시 생각해봐야됨)
	void Print_Info();					// 캐릭터 정보 출력(현재 각종 수치, 아이템 정보 표기)
	CCharacter(void);
	~CCharacter(void);
};

