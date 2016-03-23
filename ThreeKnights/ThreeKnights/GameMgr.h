#pragma once
#include "Scene.h"

class CGameMgr
{
private:
	std::list<CScene> m_vScenes; // 씬 객체를 담는 리스트

public:
	CGameMgr(void);  // 생성자

	~CGameMgr(void); // 소멸자

	void Init();      // List<Scene> 변수 초기화 및 초기화 관련 작업

	void Update();    // 게임 데이터 업데이트 및 게임 로직

	void Render();    // 게임진행시 실행되는 씬의 Render를 호출

};

