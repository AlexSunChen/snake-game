#pragma once

//游戏类
#include "glfDC.h"
#include "panel.h"
#include "worm.h"

class Game
{
	//游戏的基本元素
private:
	Panel		m_GamePanel;
	Worm		m_Worm;
	Obstacle	m_Obstacle; 
	
private:
	glfDC*		m_pDC;
	//游戏的状态
private:
	bool	m_bPanelGridOn;
	bool	m_bGameOver;

	//游戏的初始化数据
private:
	int m_nRow; //面板中网格行、列
	int m_nCol;

	float m_fWidth; //面板的宽度
	float m_fHeight; //面板的高度

public:
	Game(void);
	~Game(void);

public:
	void		ShowPanelGrid(bool bGridOn);	//控制面板网格显示
	void		ShowUserScore();				//显示用户得分
	void		ShowGameLevel();				//显示游戏级别
	Obstacle	CreateObstacle();
	//用户操作
public:
	void GameKeyboard(unsigned char key, int x, int y);
public:
	//初始化游戏
	bool	InitGame(float fWidth, float fHeight, int nRow, int nCol);
	//开始游戏
	bool	StartGame();
	//进行游戏
	bool	RunGame();
	//暂停游戏
	bool	PauseGame();
	//复位游戏
	bool	ResetGame();
	//结束游戏
	bool	EndGame();
};