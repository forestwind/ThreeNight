#pragma once

#include "Character.h"
#include "Item.h"
#include "Common.h"

class CDataBase : public Singleton<CDataBase>
{
private:

	std::list<CCharacter>	m_Character_list;		// 캐릭터 리스트
	std::list<CItem>		m_Item_list;			// 아이템 리스트

										

	
public:
	CDataBase();
	~CDataBase();
	void init();

	
	
};

