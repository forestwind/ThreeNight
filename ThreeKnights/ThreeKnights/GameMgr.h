#pragma once
#include "Scene.h"

class CGameMgr
{
private:
	std::list<CScene> m_vScenes; // �� ��ü�� ��� ����Ʈ

public:
	CGameMgr(void);  // ������

	~CGameMgr(void); // �Ҹ���

	void Init();      // List<Scene> ���� �ʱ�ȭ �� �ʱ�ȭ ���� �۾�

	void Update();    // ���� ������ ������Ʈ �� ���� ����

	void Render();    // ��������� ����Ǵ� ���� Render�� ȣ��

};

