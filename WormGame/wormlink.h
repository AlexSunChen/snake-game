#pragma once

#include "panel.h"

class WormLink
{
public:
	WormLink(nPoint ptLinkHead, int nLen, Direction dir);

public:
	void	DrawWormLink(Panel* pGamePanel, glfDC* pDC);		//绘制蛇节
	int		InLength();			//蛇节减少长度
	int		Delength();			//蛇节增加长度
	bool	Bump(nPoint ptWormHead, Direction dir); //判断蛇头是否与本节相撞

public:
	nPoint		m_ptLinkHead;	//蛇节首部坐标
	int			m_nLen;			//蛇节长度
	Direction	m_Dir;			//蛇节移动方向
};