#include "glfDC.h"

glfDC::glfDC(void)
{
	red = 0.0f;
	green = 0.0f;
	blue = 0.0f;
}

glfDC::~glfDC(void)
{
}

/************************************************************************/
/* 函数名称：Rectangle													*/
/* 参数名称：															*/
/*		left	矩形左边界												*/
/*		top		矩形上边界												*/
/*		right	矩形右边界												*/
/*		bottom	矩形下边界												*/
/* 作者：梁飞															*/
/************************************************************************/
void glfDC::Rectangle(GLfloat left, GLfloat top, GLfloat right, GLfloat bottom)
{
	glColor3f(red, green, blue);
	glBegin(GL_QUADS);
		glVertex2f(left, top);
		glVertex2f(left, bottom);
		
		glVertex2f(left, bottom);
		glVertex2f(right, bottom);

		glVertex2f(right, bottom);
		glVertex2f(right, top);

		glVertex2f(right, top);
		glVertex2f(left, top);
	glEnd();
} 

/************************************************************************/
/* 函数名称：Line														*/
/* 参数参数：															*/
/*		startX	起点坐标X值												*/
/*		startY	起点坐标Y值												*/
/*		endX	终点坐标X值												*/
/*		endY	终点坐标Y值												*/
/* 作者：梁飞															*/
/************************************************************************/
void glfDC::Line(GLfloat startX, GLfloat startY, GLfloat endX, GLfloat endY)
{
	glColor3f(red, green, blue);
	glBegin(GL_LINES);
		glVertex2f(startX, startY);
		glVertex2f(endX, endY);
	glEnd();
}

/************************************************************************/
/* 函数名称：Line
/* 函数参数：
/*		ptStart	起点坐标值
/*		ptEnd	终点坐标值
/* 作者：梁飞
/************************************************************************/
void glfDC::Line(fPoint ptStart, fPoint ptEnd)
{
	this->Line(ptStart.x, ptStart.y, ptEnd.x, ptEnd.y);
}

void glfDC::SetColor(GLfloat r, GLfloat g, GLfloat b)
{
	this->red = r;
	this->green = g;
	this->blue = b;
}