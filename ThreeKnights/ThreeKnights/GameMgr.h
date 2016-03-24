#pragma once
#include "Scene.h"
#include "Common.h"

class CGameMgr : public Singleton<CGameMgr>
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

