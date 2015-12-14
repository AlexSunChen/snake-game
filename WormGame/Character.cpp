#include "Character.h"


GLubyte glfText::upper[26][16] = 
{
	/*--  文字:  Z  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x3C,0x18,0x00,0x00,0x00,

	/*--  文字:  Y  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7C,0x66,0x66,0x66,0x7C,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,

	/*--  文字:  X  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x66,0x66,0x60,0x60,0x60,0x66,0x66,0x3C,0x00,0x00,0x00,

	/*--  文字:  W  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x78,0x6C,0x66,0x66,0x66,0x66,0x66,0x6C,0x78,0x00,0x00,0x00,

	/*--  文字:  V  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7E,0x60,0x60,0x60,0x7C,0x60,0x60,0x60,0x7E,0x00,0x00,0x00,

	/*--  文字:  U  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x7C,0x60,0x60,0x60,0x7E,0x00,0x00,0x00,

	/*--  文字:  T  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3E,0x66,0x66,0x6E,0x60,0x60,0x66,0x66,0x3C,0x00,0x00,0x00,

	/*--  文字:  S  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x7E,0x66,0x66,0x66,0x66,0x00,0x00,0x00,

	/*--  文字:  R  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,0x00,

	/*--  文字:  Q  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x66,0x66,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,

	/*--  文字:  P  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x6C,0x6C,0x78,0x6C,0x6C,0x66,0x66,0x00,0x00,0x00,

	/*--  文字:  O  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7E,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,0x00,

	/*--  文字:  N  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x63,0x63,0x63,0x6B,0x6B,0x6B,0x77,0x63,0x63,0x00,0x00,0x00,

	/*--  文字:  M  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x63,0x63,0x63,0x67,0x6F,0x7B,0x73,0x63,0x63,0x00,0x00,0x00,

	/*--  文字:  L  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,

	/*--  文字:  K  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x7C,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,

	/*--  文字:  J  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x06,0x0C,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,

	/*--  文字:  I  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x6C,0x7C,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,

	/*--  文字:  H  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x66,0x06,0x0C,0x18,0x30,0x60,0x66,0x3C,0x00,0x00,0x00,

	/*--  文字:  G  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7E,0x00,0x00,0x00,

	/*--  文字:  F  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,

	/*--  文字:  E  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x18,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,

	/*--  文字:  D  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x36,0x36,0x36,0x6B,0x6B,0x6B,0x63,0x63,0x63,0x00,0x00,0x00,

	/*--  文字:  C  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x2C,0x18,0x18,0x34,0x66,0x66,0x00,0x00,0x00,

	/*--  文字:  B  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x3C,0x66,0x66,0x66,0x66,0x00,0x00,0x00,

	/*--  文字:  A  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7E,0x60,0x60,0x30,0x18,0x0C,0x06,0x06,0x7E,0x00,0x00,0x00
};

GLubyte glfText::low[26][16] = 
{
	/*--  文字:  z  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3E,0x66,0x66,0x3E,0x06,0x06,0x3C,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  y  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7C,0x66,0x66,0x66,0x66,0x66,0x7C,0x60,0x60,0x00,0x00,0x00,

	/*--  文字:  x  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x66,0x60,0x60,0x60,0x66,0x3C,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  w  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3E,0x66,0x66,0x66,0x66,0x66,0x3E,0x06,0x06,0x00,0x00,0x00,

	/*--  文字:  v  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x60,0x60,0x7E,0x66,0x66,0x3C,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  u  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x7E,0x30,0x30,0x30,0x1E,0x00,0x00,0x00,

	/*--  文字:  t  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x7C,0x06,0x06,0x3E,0x66,0x66,0x66,0x66,0x66,0x3E,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  s  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x7C,0x60,0x60,0x00,0x00,0x00,

	/*--  文字:  r  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7E,0x18,0x18,0x18,0x18,0x18,0x78,0x00,0x18,0x18,0x00,0x00,

	/*--  文字:  q  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x78,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3C,0x00,0x0C,0x0C,0x00,0x00,

	/*--  文字:  p  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x6C,0x78,0x6C,0x66,0x66,0x60,0x60,0x00,0x00,0x00,

	/*--  文字:  o  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x78,0x00,0x00,0x00,

	/*--  文字:  n  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x63,0x6B,0x6B,0x6B,0x6B,0x6B,0x7E,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  m  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  l  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3C,0x66,0x66,0x66,0x66,0x66,0x3C,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  k  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x60,0x60,0x60,0x7C,0x66,0x66,0x66,0x66,0x66,0x7C,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  j  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x06,0x06,0x06,0x3E,0x66,0x66,0x66,0x66,0x66,0x3E,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  i  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x70,0x6E,0x66,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  h  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7C,0x06,0x06,0x3C,0x60,0x60,0x3E,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  g  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x1E,0x30,0x30,0x30,0x30,0x30,0x7E,0x30,0x30,0x00,0x00,0x00,

	/*--  文字:  f  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x3E,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  e  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x18,0x3C,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  d  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x36,0x36,0x6B,0x6B,0x6B,0x6B,0x63,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  c  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x66,0x66,0x3C,0x18,0x3C,0x66,0x66,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  b  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0xF0,0x18,0x0C,0x3C,0x66,0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,0x00,

	/*--  文字:  a  --*/
	/*--  Fixedsys12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x00,0x00,0x7E,0x60,0x30,0x18,0x0C,0x06,0x7E,0x00,0x00,0x00,0x00,0x00
};

GLubyte glfText::number[10][16] = 
{
	/*--  文字:  9  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00,0x00,

	/*--  文字:  8  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x10,0x00,0x00,0x00,

	/*--  文字:  7  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x7E,0x42,0x20,0x10,0x08,0x04,0x04,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,

	/*--  文字:  6  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x38,0x44,0x42,0x02,0x02,0x04,0x18,0x04,0x42,0x42,0x3C,0x00,0x00,0x00,

	/*--  文字:  5  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x1E,0x04,0x04,0x7E,0x44,0x44,0x24,0x24,0x14,0x0C,0x04,0x00,0x00,0x00,

	/*--  文字:  4  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x38,0x44,0x42,0x02,0x02,0x64,0x58,0x40,0x40,0x40,0x7E,0x00,0x00,0x00,

	/*--  文字:  3  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x64,0x58,0x40,0x40,0x24,0x1C,0x00,0x00,0x00,

	/*--  文字:  2  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x44,0x44,0x7E,0x00,0x00,0x00,

	/*--  文字:  1  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00,0x00,

	/*--  文字:  0  --*/
	/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
	0x00,0x00,0x38,0x24,0x02,0x02,0x1A,0x26,0x42,0x42,0x42,0x24,0x18,0x00,0x00,0x00
};

GLubyte glfText::signal[2][16] = 
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 // 空格
};


glfText::glfText(void)
{
}

glfText::~glfText(void)
{
}

void glfText::TextOut(char* sText, int len, GLfloat pos_x, GLfloat pos_y, GLfloat color_r, GLfloat color_g, GLfloat color_b)
{
	GLfloat LeftPos_x = pos_x;
	GLfloat LeftPos_y = pos_y;

	glColor3f (color_r, color_g, color_b); //设定颜色
	for (int i = 0; i < len; i++)
	{
		glRasterPos2f (LeftPos_x, LeftPos_y);
		LeftPos_x += 0.05;

		char ch = sText[i]; //大写字母
		if (ch <= 'Z' && ch >= 'A')
		{
			glBitmap (8, 16, 0.0, 0.0, 0.0, 0.0, upper[ch - 'A']);
		}
		else if (ch <= 'z' && ch >= 'a')
		{
			glBitmap (8, 16, 0.0, 0.0, 0.0, 0.0, low[ch - 'a']);
		}
		else if (ch <= '9' && ch >= '0')
		{
			glBitmap (8, 16, 0.0, 0.0, 0.0, 0.0, number[ch - '0']);
		}
		else if (ch == ' ')
		{
			glBitmap(8, 16, 0.0, 0.0, 0.0, 0.0, signal[0]);
		}
		else if (ch == ':')
		{
			glBitmap(8, 16, 0.0, 0.0, 0.0, 0.0, signal[1]);
		}
	}
}
