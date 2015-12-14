#ifndef HEADER_WORM
#define HEADER_WORM

#include "panel.h"
#include "glfDC.h"
#include <vector>
using namespace std;

class WormLink;

class Worm
{
private:
	nPoint	m_ptHead;			//头坐标
	Direction	m_dirHead;
	vector<WormLink*> m_vLink;	//节
	
	bool	m_bMeetFood;
	enum	WormStatus{EATEFOOD, GAMEOVER, NORMAL}; //蛇的三个状态 吃到食物、游戏结束、正常
public:
	Worm();
public:
	void	InitWorm(nPoint ptHead, Direction dir);
	void	WormTurn(Direction dir);
	void	WormMove();
	nPoint	GetHeadPoint();		//获取蛇头坐标
	bool	BumpSelf();			//判断蛇是否撞到自己
	void	DrawWorm(Panel* pGamePanel, glfDC* pDC);

	bool	IsGameOver(Panel* pGamePanel);
	bool	MeetFood(Obstacle& obs);
};

#endif