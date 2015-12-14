#pragma once

//��Ϸ��
#include "glfDC.h"
#include "panel.h"
#include "worm.h"

class Game
{
	//��Ϸ�Ļ���Ԫ��
private:
	Panel		m_GamePanel;
	Worm		m_Worm;
	Obstacle	m_Obstacle; 
	
private:
	glfDC*		m_pDC;
	//��Ϸ��״̬
private:
	bool	m_bPanelGridOn;
	bool	m_bGameOver;

	//��Ϸ�ĳ�ʼ������
private:
	int m_nRow; //����������С���
	int m_nCol;

	float m_fWidth; //���Ŀ��
	float m_fHeight; //���ĸ߶�

public:
	Game(void);
	~Game(void);

public:
	void		ShowPanelGrid(bool bGridOn);	//�������������ʾ
	void		ShowUserScore();				//��ʾ�û��÷�
	void		ShowGameLevel();				//��ʾ��Ϸ����
	Obstacle	CreateObstacle();
	//�û�����
public:
	void GameKeyboard(unsigned char key, int x, int y);
public:
	//��ʼ����Ϸ
	bool	InitGame(float fWidth, float fHeight, int nRow, int nCol);
	//��ʼ��Ϸ
	bool	StartGame();
	//������Ϸ
	bool	RunGame();
	//��ͣ��Ϸ
	bool	PauseGame();
	//��λ��Ϸ
	bool	ResetGame();
	//������Ϸ
	bool	EndGame();
};