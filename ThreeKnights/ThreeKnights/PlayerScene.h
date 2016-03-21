#include "stdafx.h"
#include "Scene.h"
#include "Character.h"

using namespace std;

#pragma once

class CPlayerScene :
	public CScene
{
private:
	int m_iRound;  // ���� ����

	int m_iWinner; // Winner ����

	vector<CCharacter> m_vPlayers; // �÷��̾� ĳ���� ����Ʈ

	vector<CCharacter> m_vEnemys;  // �� ĳ���� ����Ʈ

public:
	CPlayerScene(void);			   // ������

	virtual ~CPlayerScene(void);   // �Ҹ���

	void Init();

	void Update();

	void Render();

private:
	void InitEnemyCharacter(); // ��ĳ���� ����Ʈ �ʱ�ȭ 

	void InitPlayerCharacter();// �÷��̾� ĳ���� ����Ʈ �ʱ�ȭ

	void CheckRound();		   // ���� üũ

	void Fight();              // �����ϴ°� ������ �ְ� �ޱ� (�����°�)

	void CheckWinner();        // ���� �̰���� �÷��̾ �̰���� üũ

};