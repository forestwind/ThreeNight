#pragma once
class CScene
{
public:
	CScene(void);
	virtual ~CScene(void) = 0;
	virtual void Init();
	virtual void Update();
	virtual void Render();
};

