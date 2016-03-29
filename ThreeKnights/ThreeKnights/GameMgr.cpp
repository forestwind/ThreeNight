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
	// �� �߰� 
#ifndef DEBUG
	cout << "CGameMgr::init()" << endl; 
#endif

	// ����� �߰�
	CScene* temp_scene = new CReadyScene();
	m_vScenes.push_front(*temp_scene);

	// �÷��̾� �߰�
	temp_scene = new CPlayScene();
	m_vScenes.push_front(*temp_scene);

	// ����� �߰�
	temp_scene = new CResultScene();
	m_vScenes.push_front(*temp_scene);


	// DB�߰�
	CDataBase::CDataBase().getInstance().init();
	

	// ��������  2�� 
	for (int i = 0; i < 2; ++i)
	{
		// �������� ���� 
		CStage* temp_stage = new CStage();
		// �������� �߰� 
		m_Stages.push_front(*temp_stage);
	}

	for (auto Iter = m_Stages.begin(); Iter != m_Stages.end(); ++Iter)
	{
		//(*Iter).init();
	}

	// �÷��̾� ���� �� �ʱ�ȭ
	m_player = new CPlayer();
	//m_player->init();


}

void CGameMgr::Update()
{

}

void CGameMgr::Render()
{

}
