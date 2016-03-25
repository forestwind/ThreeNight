#pragma once
class CScene
{
private:
	std::string m_name;
public:
	enum class State{ready,play,result};
	CScene(void);
	virtual ~CScene(void);
	virtual void Init();
	virtual void Update();
	virtual void Render();
	CScene(std::string input);
	void Set_Name(std::string input);
	void Set_Name(CScene::State state);
	std::string Get_Name();
};

