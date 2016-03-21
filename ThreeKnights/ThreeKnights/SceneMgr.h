#include "stdafx.h"
#include "Scene.h"
using namespace std; 

#pragma once
class CSceneMgr
{
private:
	list<CScene> m_vScenes; // �� ��ü�� ��� ����Ʈ

public:
	CSceneMgr(void);  // ������

	~CSceneMgr(void); // �Ҹ���

	void Init();      // List<Scene> ���� �ʱ�ȭ �� �ʱ�ȭ ���� �۾�

	void Update();    // ���� ������ ������Ʈ �� ���� ����

	void Render();    // ��������� ����Ǵ� ���� Render�� ȣ��


};

