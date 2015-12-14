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
	
	//��ʼ�����
	m_GamePanel.SetArea(fWidth, fHeight);
	m_GamePanel.SetGrid(nRow, nCol);
	return true;
}

bool Game::StartGame()
{
	//��ʼ��Ϸ �����ϰ������
	nPoint ptInit;
	ptInit.x = m_nRow / 2;
	ptInit.y = m_nCol / 2;
	m_Worm.InitWorm(ptInit, DOWN);

	//�漴�����ϰ���
	m_Obstacle = CreateObstacle();
	return true;
}

bool Game::RunGame()
{
	//������Ϸ ������� �ϰ��� ��
	m_GamePanel.ShowGrid(m_bPanelGridOn);

	m_pDC->SetColor(1.0f, 0.0f, 0.0f); //�趨�����ɫΪ��ɫ
	m_GamePanel.DrawPanel(m_pDC);

	//-----------�ߵĿ��� ʱ������ �ߵ��ƶ�������
	if (!m_bGameOver)
	{
		if (m_Worm.MeetFood(m_Obstacle)) //�ж����Ƿ�����ʳ��
		{
			m_Obstacle = CreateObstacle(); //����ʳ����Ҫ������һ��ʳ��
		}

		m_Worm.WormMove(); //���ƶ�һ��
	}	
	if (m_bGameOver = m_Worm.IsGameOver(&m_GamePanel))
	{
		cout << "Game Over\n";
	}
	m_pDC->SetColor(1.0f, 1.0f, 0.0f); //�趨�ߵ���ɫ
	m_Worm.DrawWorm(&m_GamePanel, m_pDC);
	//--------------����Ϊ�ߵĿ��ƴ���


	//ȡ���ϰ��������
	nPoint ptObstacle;
	ptObstacle.x = m_Obstacle.col;
	ptObstacle.y = m_Obstacle.row;
	
	//������ϻ����ϰ���
	m_pDC->SetColor(0.5f, 0.5f, 0.5f); //�趨�ϰ�����ɫ
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