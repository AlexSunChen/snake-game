#pragma once

#include "panel.h"

class WormLink
{
public:
	WormLink(nPoint ptLinkHead, int nLen, Direction dir);

public:
	void	DrawWormLink(Panel* pGamePanel, glfDC* pDC);		//�����߽�
	int		InLength();			//�߽ڼ��ٳ���
	int		Delength();			//�߽����ӳ���
	bool	Bump(nPoint ptWormHead, Direction dir); //�ж���ͷ�Ƿ��뱾����ײ

public:
	nPoint		m_ptLinkHead;	//�߽��ײ�����
	int			m_nLen;			//�߽ڳ���
	Direction	m_Dir;			//�߽��ƶ�����
};