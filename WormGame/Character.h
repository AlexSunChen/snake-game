#pragma once

#include "stdafx.h"

class glfText // openGL feelang Text class
{
public:
	glfText(void);
	~glfText(void);
public:
	void TextOut(char* sText, int len, GLfloat pos_x, GLfloat pos_y, GLfloat color_r, GLfloat color_g, GLfloat color_b);
private:
	static GLubyte upper[26][16];	// upper character ��д��ĸ
	static GLubyte low[26][16];		// lower character Сд��ĸ
	static GLubyte number[10][16];	// digital number  ����
	static GLubyte signal[2][16];	// ������
};
