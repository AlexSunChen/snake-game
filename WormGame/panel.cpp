#include "Panel.h"
#include "stdafx.h"
#include <iostream>
using namespace std;


Panel::Panel()
{

}


Panel::Panel(float width, float height)
{
	m_fWidth = width;
	m_fHeight = height;
}


float Panel::SetGrid(int row, int col)
{
	m_nRow = row;
	m_nCol = col;
	
	m_fGridGap = (m_fWidth / m_nCol) < (m_fHeight / m_nRow) ? (m_fWidth / m_nCol) : (m_fHeight / m_nRow);

	m_ptPanel[0].x = -m_fGridGap * m_nCol / 2;
	m_ptPanel[0].y = -m_fGridGap * m_nRow / 2;

	m_ptPanel[1].x = m_ptPanel[0].x + m_nCol * m_fGridGap;
	m_ptPanel[1].y = m_ptPanel[0].y;

	m_ptPanel[2].x = m_ptPanel[1].x;
	m_ptPanel[2].y = m_ptPanel[1].y + m_nRow * m_fGridGap;

	m_ptPanel[3].x = m_ptPanel[2].x - m_nCol * m_fGridGap;
	m_ptPanel[3].y = m_ptPanel[2].y;

	return m_fGridGap;
}

bool Panel::DrawPanel(glfDC* pDC)
{
	for (int i = 0; i < 4; i++)
	{
		pDC->Line(m_ptPanel[i], m_ptPanel[(i + 1) % 4]);
	}

	if (m_bGridOn)
	{
		for (int i = 1; i < m_nRow; i++)
		{
			pDC->Line(m_ptPanel[0].x, m_ptPanel[0].y + i * m_fGridGap, 
					  m_ptPanel[1].x, m_ptPanel[1].y + i *m_fGridGap);
		}

		for (int j = 1; j < m_nCol; j++)
		{
			pDC->Line(m_ptPanel[0].x + j * m_fGridGap, m_ptPanel[0].y,
					  m_ptPanel[3].x + j * m_fGridGap, m_ptPanel[3].y);
		}
	}
	return true;
}

void Panel::ShowGrid(bool flag)
{
	m_bGridOn = flag;
}

bool Panel::SetArea(float width, float height)
{
	m_fWidth = width;
	m_fHeight = height;
	return true;
}

/************************************************************************/
/*	函数名称：LPtoDP                                                    */
/*	函数功能：将逻辑坐标转换成设备坐标									*/
/*  参数说明：															*/
/*		x	逻辑坐标的x值												*/
/*		y	逻辑坐标的y值												*/
/************************************************************************/
fPoint Panel::LPtoDP(int x, int y)
{
	fPoint pt;
	pt.x = m_ptPanel[0].x + x * m_fGridGap;
	pt.y = m_ptPanel[0].y + y * m_fGridGap;
	return pt;
}

fPoint Panel::LPtoDP(nPoint lp)
{
	return this->LPtoDP(lp.x, lp.y);
}

void Panel::FillGrid(nPoint pt, int nLen, Direction dir, glfDC* pDC)
{
	fPoint fpt[4]; //绘制区域的四个点坐标
	switch (dir)
	{
	case LEFT:
		{
			fpt[0] = this->LPtoDP(pt);
			
			fpt[1].x = fpt[0].x + nLen * m_fGridGap;
			fpt[1].y = fpt[0].y;
			
			fpt[2].x = fpt[1].x;
			fpt[2].y = fpt[1].y + m_fGridGap;

			fpt[3].x = fpt[2].x - nLen * m_fGridGap;
			fpt[3].y = fpt[2].y;
			
			break;
		}

	case RIGHT:
		{
			fpt[0] = this->LPtoDP(pt.x - nLen + 1, pt.y);
			
			fpt[1].x = fpt[0].x + nLen * m_fGridGap;
			fpt[1].y = fpt[0].y;

			fpt[2].x = fpt[1].x;
			fpt[2].y = fpt[1].y + m_fGridGap;

			fpt[3].x = fpt[2].x - nLen * m_fGridGap;
			fpt[3].y = fpt[2].y;

			break;
		}

	case UP:
		{
			fpt[0] = this->LPtoDP(pt.x, pt.y - nLen + 1);
			
			fpt[1].x = fpt[0].x + m_fGridGap;
			fpt[1].y = fpt[0].y;

			fpt[2].x = fpt[1].x;
			fpt[2].y = fpt[1].y + nLen * m_fGridGap;

			fpt[3].x = fpt[2].x - m_fGridGap;
			fpt[3].y = fpt[2].y;

			break;
		}
 
	case DOWN:
		{
			fpt[0] = this->LPtoDP(pt.x, pt.y);
			
			fpt[1].x = fpt[0].x + m_fGridGap;
			fpt[1].y = fpt[0].y;

			fpt[2].x = fpt[1].x;
			fpt[2].y = fpt[1].y + nLen * m_fGridGap;

			fpt[3].x = fpt[2].x - m_fGridGap;
			fpt[3].y = fpt[2].y;
			break;
		}
	}

	//填充方格
//	pDC->SetColor(0.0f, 0.0f, 1.0f);
	pDC->Rectangle(fpt[3].x, fpt[3].y, fpt[1].x, fpt[1].y);
}

Panel::~Panel()
{

}