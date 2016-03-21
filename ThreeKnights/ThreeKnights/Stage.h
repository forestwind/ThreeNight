#pragma once
class CStage
{
private:
	
	//������
	enum class difficulty { easy, normal, hard };

	//������ ���
	int m_MaxRound;							// �� ���������� �� ����
	std::string m_stage_name;				// �������� �̸�
	std::string m_stage_explanation;		// �������� ����
	difficulty m_difficulty;				// �������� ���̵� (1:���� 2:���� 3:�����)
	
	

public:

	//get �Լ�
	int get_MaxRound();
	std::string get_stage_name();
	std::string get_stage_explanation();
	difficulty get_difficulty();


	//set �Լ�
	void set_MaxRound(const int MaxRound);
	void set_stage_name(const std::string stage_name);
	void set_stage_explanation(const std::string stage_explanation);
	void set_difficulty(const difficulty m_difficulty);

	// ������ �� �Ҹ���
	CStage(void);
	~CStage(void);
};
