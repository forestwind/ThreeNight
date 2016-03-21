#include "stdafx.h"
#include "Scene.h"
#include "Character.h"

using namespace std;

#pragma once

class CPlayerScene :
	public CScene
{
private:
	int m_iRound;  // 라운드 정보

	int m_iWinner; // Winner 정보

	vector<CCharacter> m_vPlayers; // 플레이어 캐릭터 리스트

	vector<CCharacter> m_vEnemys;  // 적 캐릭터 리스트

public:
	CPlayerScene(void);			   // 생성자

	virtual ~CPlayerScene(void);   // 소멸자

	void Init();

	void Update();

	void Render();

private:
	void InitEnemyCharacter(); // 적캐릭터 리스트 초기화 

	void InitPlayerCharacter();// 플레이어 캐릭터 리스트 초기화

	void CheckRound();		   // 라운드 체크

	void Fight();              // 전투하는거 데이터 주고 받기 (때리는것)

	void CheckWinner();        // 적이 이겼는지 플레이어가 이겼는지 체크

};