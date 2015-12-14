#include "WormLink.h"
#include "Worm.h"
#include <iostream>

Worm::Worm()
{
	m_bMeetFood = false;
}

void Worm::InitWorm(nPoint ptHead, Direction dir)
{
	//创建一个蛇节作为蛇的头部所在节
	m_dirHead = dir;
	m_ptHead = ptHead;
	WormLink* pLink = new WormLink(ptHead, 3, dir);
	m_vLink.push_back(pLink);
}

nPoint Worm::GetHeadPoint()
{
	return m_ptHead;
}

bool Worm::IsGameOver(Panel* pGamePanel)
{
	bool bCollidePanel = (m_ptHead.x > pGamePanel->m_nCol - 1 || m_ptHead.x < 0 || m_ptHead.y < 0 || m_ptHead.y > pGamePanel->m_nRow - 1);
	return bCollidePanel || this->BumpSelf();
}

bool Worm::MeetFood(Obstacle& obs)
{
	cout << "Food:(" << obs.col << " " << obs.row << ")" << endl;
	cout << "SnakeHead(" << m_ptHead.x <<" " << m_ptHead.y << ")" << endl;
	//if (m_ptHead.x == obs.col && m_ptHead.y == obs.row)
	//{
	//	m_bMeetFood = true;
	//}
	//
	//return m_bMeetFood;

	switch (this->m_dirHead)
	{
	case UP:
		if (obs.row - 1 == m_ptHead.y && obs.col == m_ptHead.x)
		{
			m_bMeetFood = true;
		}
		break;

	case DOWN:
		if (obs.row + 1 == m_ptHead.y && obs.col == m_ptHead.x)
		{
			m_bMeetFood = true;
		}
		break;

	case LEFT:
		if (obs.row == m_ptHead.y && obs.col + 1 == m_ptHead.x)
		{
			cout << obs.row << " " << obs.col + 1 << endl;
			cout << m_ptHead.y << " " << m_ptHead.x << endl;
			m_bMeetFood = true;
		}
		break;

	case RIGHT:
		if (obs.row == m_ptHead.y && obs.col - 1 == m_ptHead.x)
		{
			m_bMeetFood = true;
		}
		break;
	}

	if (m_bMeetFood)
		cout << "Food" << endl;
	return m_bMeetFood ;
}


bool Worm::BumpSelf()
{
	for (vector<WormLink*>::iterator it = m_vLink.begin(); it != m_vLink.end(); it++)
	{
		if ((*it)->Bump(m_ptHead, this->m_dirHead))
		{
			return true;
		}
	}
	return false;
}

void Worm::WormMove()
{
	WormLink* pHead = m_vLink[m_vLink.size() - 1]; //获取头所在节
	pHead->InLength(); //头节长度加一
	this->m_ptHead = pHead->m_ptLinkHead;

	if (m_bMeetFood) //遇到食物则蛇的尾部长度不发生变化
	{
		m_bMeetFood = false;
		return; 
	}
	WormLink* pTail = m_vLink[0];
	
	if (pTail->Delength() == 0) //尾节长度减一
	{
		delete pTail;
		m_vLink.erase(m_vLink.begin());
	}
}

void Worm::DrawWorm(Panel* pGamePanel, glfDC* pDC)
{
	for (vector<WormLink*>::iterator it = m_vLink.begin(); it != m_vLink.end(); it++)
	{
		(*it)->DrawWormLink(pGamePanel, pDC);
	}
}

void Worm::WormTurn(Direction dir)
{
	if (this->m_dirHead == UP || this->m_dirHead == DOWN)
	{
		if (dir == LEFT || RIGHT)
		{
			WormLink* p = new WormLink(m_ptHead, 0, dir);
			m_vLink.push_back(p);
			this->m_dirHead = dir;
		}
	}
	else if (this->m_dirHead == LEFT || this->m_dirHead == RIGHT)
	{
		if (dir == UP || dir == DOWN)
		{
			WormLink* p = new WormLink(m_ptHead, 0, dir);
			m_vLink.push_back(p);
			this->m_dirHead = dir;
		}
	}
}