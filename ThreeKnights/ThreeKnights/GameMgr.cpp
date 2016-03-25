#include "StdAfx.h"
#include "GameMgr.h"
#include "PlayerScene.h"
#include "ReadyScene.h"
#include "ResultScene.h"

using namespace std;

CGameMgr::CGameMgr(void)
{
}


CGameMgr::~CGameMgr(void)
{
}

void CGameMgr::Init()
{
	// �� �߰� 
#ifndef DEBUG
	cout << "CGameMgr::init()" << endl; 
#endif

	// ����� �߰�
	CScene* temp_scene = new CReadyScene();
	m_vScenes.push_front(*temp_scene);

	// �÷��̾� �߰�
	temp_scene = new CPlayerScene();
	m_vScenes.push_front(*temp_scene);

	// ����� �߰�
	temp_scene = new CResultScene();
	m_vScenes.push_front(*temp_scene);

}

void CGameMgr::Update()
{

}

void CGameMgr::Render()
{

}
