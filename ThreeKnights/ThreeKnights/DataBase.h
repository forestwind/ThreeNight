#pragma once

#include "Character.h"
#include "Item.h"
#include "Common.h"

class CDataBase : public Singleton<CDataBase>
{
private:

	std::list<CCharacter>	m_Character_list;		// ĳ���� ����Ʈ
	std::list<CItem>		m_Item_list;			// ������ ����Ʈ

										

	
public:
	CDataBase();
	~CDataBase();
	void init();

	
	
};

