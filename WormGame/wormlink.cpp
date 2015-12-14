#include "WormLink.h"

WormLink::WormLink(nPoint ptLinkHead, int nLen, Direction dir)
{
	m_ptLinkHead = ptLinkHead;
	m_nLen = nLen;
	m_Dir = dir;
}

int WormLink::Delength()
{
	m_nLen--;
	return m_nLen;
}

int WormLink::InLength()
{
	m_nLen++;
	switch (m_Dir)
	{
	case LEFT:
		m_ptLinkHead.x--;
		break;

	case RIGHT:
		m_ptLinkHead.x++;
		break;

	case UP:
		m_ptLinkHead.y++;
		break;

	case DOWN:
		m_ptLinkHead.y--;
		break;
	}
	return m_nLen;
}

void WormLink::DrawWormLink(Panel* pGamePanel, glfDC* pDC)
{
	pGamePanel->FillGrid(m_ptLinkHead, m_nLen, m_Dir, pDC);
}

bool WormLink::Bump(nPoint ptWormHead, Direction dir)
{
	nPoint ptTail;
	if (this->m_Dir == UP)
	{
		ptTail.x = m_ptLinkHead.x;
		ptTail.y = m_ptLinkHead.y - m_nLen;

		if (dir == UP || dir == DOWN)
		{
			return false;
		}
		else if (dir == RIGHT || dir == LEFT)
		{
			return (ptWormHead.x == ptTail.x && ptWormHead.y <= m_ptLinkHead.y && ptWormHead.y >= ptTail.y);
		}
	}
	else if (this->m_Dir == DOWN)
	{
		ptTail.x = m_ptLinkHead.x;
		ptTail.y = m_ptLinkHead.y + m_nLen;

		if (dir == UP || dir == DOWN)
		{
			return false;
		}
		else if (dir == RIGHT || LEFT)
		{
			return (ptWormHead.x == ptTail.x && ptWormHead.y >= m_ptLinkHead.y && ptWormHead.y <= ptTail.y);
		}
	}
	else if (this->m_Dir == LEFT)
	{
		ptTail.x = m_ptLinkHead.x - m_nLen;
		ptTail.y = m_ptLinkHead.y;

		if (dir == LEFT || dir == RIGHT)
		{
			return false;
		}
		else if (dir == UP || dir == DOWN)
		{
			return (ptWormHead.x >= ptTail.x && ptWormHead.x <= m_ptLinkHead.x && ptWormHead.y == ptTail.y);
		}
	}

	else if (this->m_Dir == RIGHT)
	{
		ptTail.x = m_ptLinkHead.x + m_nLen;
		ptTail.y = m_ptLinkHead.y;

		if (dir == LEFT || dir == RIGHT)
		{
			return false;
		}
		else if (dir == UP || dir == DOWN)
		{
			return (ptWormHead.x >= m_ptLinkHead.x && ptWormHead.x <= ptTail.x && ptWormHead.y == ptTail.y);
		}
	}
	return true;
}