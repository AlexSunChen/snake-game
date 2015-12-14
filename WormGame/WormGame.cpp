// WormGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"
#include <iostream>
using namespace std;

//游戏主体
Game g_Game;


void InitScense()
{
	g_Game.InitGame(2.0f, 2.0f, 10, 10);
	g_Game.ShowPanelGrid(true);
	g_Game.StartGame();
}


void myTimer(int value)
{
	glutPostRedisplay();
	glutTimerFunc(300, myTimer, 0);
}


void myReshape(int w, int h)
{
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-0.5, 0.5, -0.5, 0.5);
	
	if(w <= h)
		glOrtho(-2.25, 2.25, -2.25 * h / w, 2.25 * h / w,-10.0, 10.0);
	else
		glOrtho(-2.25 * w / h, 2.25 * w / h,-2.25, 2.25, -10.0, 10.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	if (!g_Game.RunGame()) //游戏结束取消定时器
	{
		glutTimerFunc(300, NULL, 0);
	}
	glFlush();
	glutSwapBuffers();
}

void myKeyboard(unsigned char key, int x, int y)
{

	g_Game.GameKeyboard(key, x, y);
//	glutPostRedisplay(); 
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Worm");
	

	glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(myReshape);
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(300, myTimer, 0);
	InitScense(); //初始化游戏场景
	glutMainLoop();
	return 0;
}

