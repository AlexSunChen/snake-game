#pragma once


#include "stdafx.h"

//��װOpenGL��API���豸��������

//ֵΪ������������ṹ
struct fPoint
{
	float x;
	float y;
};
//ֵΪ���ε�����ṹ
struct nPoint
{
	int x;
	int y;

};
//�豸������
class glfDC
{
public:
	glfDC(void);
	~glfDC(void);

public:
	void SetColor(GLfloat r, GLfloat g, GLfloat b);			//�趨��ͼ��ɫ
public:
	void Rectangle(GLfloat left, GLfloat top, GLfloat right, GLfloat bottom);	//���ƾ�������
	void Line(GLfloat startX, GLfloat startY, GLfloat endX, GLfloat endY);		//����ֱ��
	void Line(fPoint ptStart, fPoint ptEnd);									//����ֱ��

private:
	GLfloat red, green, blue;	//��ͼ��ɫ
};
