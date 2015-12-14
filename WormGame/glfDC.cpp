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
/* �������ƣ�Rectangle													*/
/* �������ƣ�															*/
/*		left	������߽�												*/
/*		top		�����ϱ߽�												*/
/*		right	�����ұ߽�												*/
/*		bottom	�����±߽�												*/
/* ���ߣ�����															*/
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
/* �������ƣ�Line														*/
/* ����������															*/
/*		startX	�������Xֵ												*/
/*		startY	�������Yֵ												*/
/*		endX	�յ�����Xֵ												*/
/*		endY	�յ�����Yֵ												*/
/* ���ߣ�����															*/
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
/* �������ƣ�Line
/* ����������
/*		ptStart	�������ֵ
/*		ptEnd	�յ�����ֵ
/* ���ߣ�����
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