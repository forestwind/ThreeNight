#pragma once
#include "Scene.h"
#include "Common.h"
#include "Player.h"
#include "Stage.h"

class CGameMgr : public Singleton<CGameMgr>
{
private:
	std::list<CScene> m_vScenes; // �� ��ü�� ��� ����Ʈ

	CPlayer* m_player;			 // �÷��̾�
	
	std::list<CStage> m_Stages; // ��������

	

public:
	CGameMgr(void);  // ������

	~CGameMgr(void); // �Ҹ���

	void Init();      // List<Scene> ���� �ʱ�ȭ �� �ʱ�ȭ ���� �۾�

	void Update();    // ���� ������ ������Ʈ �� ���� ����

	void Render();    // ��������� ����Ǵ� ���� Render�� ȣ��

};

