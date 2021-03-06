#include "stdafx.h"
#include <GL\glut.h>
#include<GL\gl.h>

void init(void) {
	glClearColor(1, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 412.5, 0.0, 375.0);
}

void linesegment(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.203125, 0.65625, 0.31640625);

	//pentagon
	glBegin(GL_POLYGON);
	glVertex2i(25, 25);
	glVertex2i(75, 25);
	glVertex2i(90, 75);
	glVertex2i(50, 110);
	glVertex2i(10, 75);
	glEnd();

	//hexagon
	glBegin(GL_POLYGON);
	glVertex2i(250, 25);
	glVertex2i(300, 25);
	glVertex2i(320, 65);
	glVertex2i(300, 115);
	glVertex2i(250, 115);
	glVertex2i(230, 65);
	glEnd();

	//heptagon
	glBegin(GL_POLYGON);
	glVertex2i(35, 140);
	glVertex2i(70, 140);
	glVertex2i(90, 175);
	glVertex2i(80, 200);
	glVertex2i(52, 215);
	glVertex2i(25, 200);
	glVertex2i(15, 170);
	glEnd();

	//octagon
	glBegin(GL_POLYGON);
	glVertex2i(250, 140);
	glVertex2i(300, 140);
	glVertex2i(320, 170);
	glVertex2i(320, 200);
	glVertex2i(300, 230);
	glVertex2i(250, 230);
	glVertex2i(230, 200);
	glVertex2i(230, 170);
	glEnd();

	//nonagon
	glBegin(GL_POLYGON);
	glVertex2i(35, 240);
	glVertex2i(75, 240);
	glVertex2i(90, 260);
	glVertex2i(95, 290);
	glVertex2i(82, 320);
	glVertex2i(55, 330);
	glVertex2i(23, 320);
	glVertex2i(10, 290);
	glVertex2i(15, 260);
	glEnd();

	//decagon
	glBegin(GL_POLYGON);
	glVertex2i(250, 240);
	glVertex2i(280, 240);
	glVertex2i(310, 260);
	glVertex2i(315, 280);
	glVertex2i(310, 300);
	glVertex2i(280, 320);
	glVertex2i(250, 320);
	glVertex2i(220, 300);
	glVertex2i(215, 280);
	glVertex2i(220, 260);
	glEnd();

	glFlush();
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(550, 500);
	glutCreateWindow("geometric shapes");
	init();
	glutDisplayFunc(linesegment);
	glutMainLoop();
}
