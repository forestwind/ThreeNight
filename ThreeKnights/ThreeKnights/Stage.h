#pragma once
#include "Character.h"
class CRound
{
private:

	std::list<CCharacter> m_enemy_Character;	// 적 캐릭터 리스트
	std::vector<int> m_enemy_currentHp;			// 적 현재 체력 (벡터) 
	std::vector<int> m_player_currentHp;		// 플레이어 현재 체력 (벡터)

public:
	bool ExitRound();							//라운드 종료조건
};


class CStage
{
private:
	
	//열거형
	enum class difficulty { easy, normal, hard };

	//데이터 멤버
	int m_MaxRound;								// 한 스테이지당 총 라운드
	std::string m_stage_name;					// 스테이지 이름
	std::string m_stage_explanation;			// 스테이지 설명
	difficulty m_difficulty;					// 스테이지 난이도 (1:쉬움 2:보통 3:어려움)
	std::list<CRound> m_round;					// 라운드 정보

public:

	//get 함수
	int get_MaxRound();
	std::string get_stage_name();
	std::string get_stage_explanation();
	difficulty get_difficulty();


	//set 함수
	void set_MaxRound(const int MaxRound);
	void set_stage_name(const std::string stage_name);
	void set_stage_explanation(const std::string stage_explanation);
	void set_difficulty(const difficulty m_difficulty);

	// 생성자 및 소멸자
	CStage(void);
	~CStage(void);
};

