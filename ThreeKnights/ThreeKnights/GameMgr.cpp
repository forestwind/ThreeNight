#include "StdAfx.h"
#include "GameMgr.h"
#include "PlayScene.h"
#include "ReadyScene.h"
#include "ResultScene.h"
#include "DataBase.h"

using namespace std;

CGameMgr::CGameMgr(void)
{
}


CGameMgr::~CGameMgr(void)
{
}

void CGameMgr::Init()
{
	// 씬 추가 
#ifndef DEBUG
	cout << "CGameMgr::init()" << endl; 
#endif

	// 레디씬 추가
	CScene* temp_scene = new CReadyScene();
	m_vScenes.push_front(*temp_scene);

	// 플레이씬 추가
	temp_scene = new CPlayScene();
	m_vScenes.push_front(*temp_scene);

	// 결과씬 추가
	temp_scene = new CResultScene();
	m_vScenes.push_front(*temp_scene);


	// DB추가
	CDataBase::CDataBase().getInstance().init();
	

	// 스테이지  2개 
	for (int i = 0; i < 2; ++i)
	{
		// 스테이지 생성 
		CStage* temp_stage = new CStage();
		// 스테이지 추가 
		m_Stages.push_front(*temp_stage);
	}

	for (auto Iter = m_Stages.begin(); Iter != m_Stages.end(); ++Iter)
	{
		//(*Iter).init();
	}

	// 플레이어 생성 및 초기화
	m_player = new CPlayer();
	//m_player->init();


}

void CGameMgr::Update()
{

}

void CGameMgr::Render()
{

}
