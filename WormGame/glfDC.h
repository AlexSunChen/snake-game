#pragma once


#include "stdafx.h"

//封装OpenGL的API的设备上下文类

//值为浮点数的坐标结构
struct fPoint
{
	float x;
	float y;
};
//值为整形的坐标结构
struct nPoint
{
	int x;
	int y;

};
//设备上下文
class glfDC
{
public:
	glfDC(void);
	~glfDC(void);

public:
	void SetColor(GLfloat r, GLfloat g, GLfloat b);			//设定绘图颜色
public:
	void Rectangle(GLfloat left, GLfloat top, GLfloat right, GLfloat bottom);	//绘制矩形区域
	void Line(GLfloat startX, GLfloat startY, GLfloat endX, GLfloat endY);		//绘制直线
	void Line(fPoint ptStart, fPoint ptEnd);									//绘制直线

private:
	GLfloat red, green, blue;	//绘图颜色
};
