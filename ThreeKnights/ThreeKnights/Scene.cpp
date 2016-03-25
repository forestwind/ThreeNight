#include "StdAfx.h"
#include "Scene.h"

CScene::CScene(void)
{
}

CScene::CScene(std::string input){
	m_name = input;
}

CScene::~CScene(void)
{
}

void CScene::Set_Name(std::string input){
	m_name = input;
}

void CScene::Set_Name(CScene::State state){
	switch (state)
	{
	case State::ready:
		m_name = "ready scene";
		break;
	case State::play:
		m_name = "play scene";
		break;
	case State::result:
		m_name = "result scene";
		break;
	default:
		break;
	}
}

std::string CScene::Get_Name(){
	return m_name;
}

void CScene::Init(void){

}

void CScene::Render(void){

}

void CScene::Update(void){

}