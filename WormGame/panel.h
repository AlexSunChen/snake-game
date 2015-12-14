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
	//������Ϸ����ֵ����ʼ�����
	Panel(float width, float height);
	//�趨������� ��СΪwidth��height 
	bool SetArea(float width, float height);
	//�����С�������ʼ������
	float SetGrid(int row, int col);
	//�������
	bool DrawPanel(glfDC* pDC);
	//��ʾ�������
	void ShowGrid(bool flag);
	//����������߼�����ת�����豸����
	fPoint LPtoDP(int x, int y);
	fPoint LPtoDP(nPoint lp);
	//��������ת�����߼�����
	nPoint DPtoLP(float x, float y);
	//�ж������Ƿ������߽�
	bool OnPanelEdge(float pt_x, float pt_y, int pt_dir);
	void FillGrid(nPoint pt, int nLen, Direction dir, glfDC* pDC);

public:
	float m_fWidth; //���������ֵ
	float m_fHeight; //�������߶�ֵ
	
	fPoint m_ptPanel[4]; //����ĸ��ǵ�����ֵ
		
	int m_nRow;	//��������
	int m_nCol;	//��������
	
	float m_fGridGap; //������ֵ
	bool m_bGridOn; //������ʾ��־
};