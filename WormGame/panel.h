#pragma once

#include "glfDC.h"

struct Obstacle
{
	int row;
	int col;
};


class Panel
{
public:
	Panel();
	~Panel();
	//根据游戏长宽值来初始化面板
	Panel(float width, float height);
	//设定面板区域 大小为width×height 
	bool SetArea(float width, float height);
	//根据行、列来初始化网格
	float SetGrid(int row, int col);
	//绘制面板
	bool DrawPanel(glfDC* pDC);
	//显示面板网格
	void ShowGrid(bool flag);
	//根据网格的逻辑坐标转换成设备坐标
	fPoint LPtoDP(int x, int y);
	fPoint LPtoDP(nPoint lp);
	//物理坐标转换成逻辑坐标
	nPoint DPtoLP(float x, float y);
	//判断物体是否在面板边界
	bool OnPanelEdge(float pt_x, float pt_y, int pt_dir);
	void FillGrid(nPoint pt, int nLen, Direction dir, glfDC* pDC);

public:
	float m_fWidth; //控制面板宽度值
	float m_fHeight; //控制面板高度值
	
	fPoint m_ptPanel[4]; //面板四个角的坐标值
		
	int m_nRow;	//网格列数
	int m_nCol;	//网格行数
	
	float m_fGridGap; //网格间隔值
	bool m_bGridOn; //网格显示标志
};