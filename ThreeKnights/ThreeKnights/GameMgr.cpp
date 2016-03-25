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
	// ¾À Ãß°¡ 
#ifndef DEBUG
	cout << "CGameMgr::init()" << endl; 
#endif

	// ·¹µð¾À Ãß°¡
	CScene* temp_scene = new CReadyScene();
	m_vScenes.push_front(*temp_scene);

	// ÇÃ·¹ÀÌ¾À Ãß°¡
	temp_scene = new CPlayerScene();
	m_vScenes.push_front(*temp_scene);

	// °á°ú¾À Ãß°¡
	temp_scene = new CResultScene();
	m_vScenes.push_front(*temp_scene);

}

void CGameMgr::Update()
{

}

void CGameMgr::Render()
{

}
