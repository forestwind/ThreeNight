#include "StdAfx.h"
#include "Character.h"


CCharacter::CCharacter(void)
{
	m_level = NoInit;
	m_att = NoInit;
	m_def = NoInit;
	m_grade = NoInit;
	m_hp = NoInit;
	m_name = "No Init";
}


CCharacter::~CCharacter(void)
{
}

void CCharacter::Set_Item(const CItem& item){

}
void CCharacter::Print_Info(){

}

