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
	nPoint	m_ptHead;			//ͷ����
	Direction	m_dirHead;
	vector<WormLink*> m_vLink;	//��
	
	bool	m_bMeetFood;
	enum	WormStatus{EATEFOOD, GAMEOVER, NORMAL}; //�ߵ�����״̬ �Ե�ʳ���Ϸ����������
public:
	Worm();
public:
	void	InitWorm(nPoint ptHead, Direction dir);
	void	WormTurn(Direction dir);
	void	WormMove();
	nPoint	GetHeadPoint();		//��ȡ��ͷ����
	bool	BumpSelf();			//�ж����Ƿ�ײ���Լ�
	void	DrawWorm(Panel* pGamePanel, glfDC* pDC);

	bool	IsGameOver(Panel* pGamePanel);
	bool	MeetFood(Obstacle& obs);
};

#endif