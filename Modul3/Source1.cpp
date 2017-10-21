#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

void kotak()
{
	//[a]
	//glTranslatef(200, -100, 0);
	glBegin(GL_QUADS);
	//[b]
	//glTranslatef(200, -100, 0);
	glScalef(1, 0.25, 0);
	glColor3f(1, 1, 1);
	glVertex2f(100, 100);
	glVertex2f(100, -100);
	//[c]
	//glTranslatef(200, -100, 0);
	glVertex2f(-100, -100);
	glVertex2f(-100, 100);
	//[d]
	//glTranslatef(200, -100, 0);
	glEnd();
	//[e]
	glTranslatef(200, -100, 0);
}

void render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	kotak();
	glPopMatrix();
	glutSwapBuffers();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutCreateWindow("XIIRPL4-06-Dhea Armalivia Airizah");
	gluOrtho2D(-400, 400, -300, 300);
	glClearColor(0, 0, 0, 0);
	glutDisplayFunc(render);
	glutMainLoop();
	return 0;
}