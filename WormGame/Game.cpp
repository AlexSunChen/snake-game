#include "stdafx.h"
#include "Game.h"
#include <time.h>
#include <iostream>

Game::Game(void)
{
	m_pDC = new glfDC();
	m_bGameOver = false;
}

Game::~Game(void)
{
}

void Game::ShowPanelGrid(bool bGridOn)
{
	m_bPanelGridOn = bGridOn;
}

void Game::ShowUserScore()
{

}

void Game::ShowGameLevel()
{

}


bool Game::InitGame(float fWidth, float fHeight, int nRow, int nCol)
{
	m_fWidth = fWidth;
	m_fHeight = fHeight;
	m_nRow = nRow;
	m_nCol = nCol;
	
	//初始化面板
	m_GamePanel.SetArea(fWidth, fHeight);
	m_GamePanel.SetGrid(nRow, nCol);
	return true;
}

bool Game::StartGame()
{
	//开始游戏 绘制障碍物和蛇
	nPoint ptInit;
	ptInit.x = m_nRow / 2;
	ptInit.y = m_nCol / 2;
	m_Worm.InitWorm(ptInit, DOWN);

	//随即产生障碍物
	m_Obstacle = CreateObstacle();
	return true;
}

bool Game::RunGame()
{
	//运行游戏 绘制面板 障碍物 蛇
	m_GamePanel.ShowGrid(m_bPanelGridOn);

	m_pDC->SetColor(1.0f, 0.0f, 0.0f); //设定面板颜色为红色
	m_GamePanel.DrawPanel(m_pDC);

	//-----------蛇的控制 时序问题 蛇的移动、绘制
	if (!m_bGameOver)
	{
		if (m_Worm.MeetFood(m_Obstacle)) //判断蛇是否遇到食物
		{
			m_Obstacle = CreateObstacle(); //遇到食物则要产生另一个食物
		}

		m_Worm.WormMove(); //蛇移动一步
	}	
	if (m_bGameOver = m_Worm.IsGameOver(&m_GamePanel))
	{
		cout << "Game Over\n";
	}
	m_pDC->SetColor(1.0f, 1.0f, 0.0f); //设定蛇的颜色
	m_Worm.DrawWorm(&m_GamePanel, m_pDC);
	//--------------以上为蛇的控制代码


	//取得障碍物的坐标
	nPoint ptObstacle;
	ptObstacle.x = m_Obstacle.col;
	ptObstacle.y = m_Obstacle.row;
	
	//在面板上绘制障碍物
	m_pDC->SetColor(0.5f, 0.5f, 0.5f); //设定障碍物颜色
	m_GamePanel.FillGrid(ptObstacle, 1, UP, m_pDC);

	return m_bGameOver;
}

bool Game::PauseGame()
{
	return true;
}

bool Game::EndGame()
{
	return true;
}

void Game::GameKeyboard(unsigned char key, int x, int y)
{
	Direction dir;
	switch (key)
	{
	case 'w':
	case 'W':
		dir = UP;
		break;

	case 's':
	case 'S':
		dir = DOWN;
		break;

	case 'a':
	case 'A':
		dir = LEFT;
		break;

	case 'd':
	case 'D':
		dir = RIGHT;
		break;

	case '1':
		this->StartGame();
		std::cout << "Start Game\n";
		break;
	}
	m_Worm.WormTurn(dir);
}

Obstacle Game::CreateObstacle()
{
	Obstacle obs;
	srand(time(NULL));
	obs.col = rand() % m_nCol;
	obs.row = rand() % m_nRow;
	return obs;
}