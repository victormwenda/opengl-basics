/*
 * mainwindow.c
 *
 *  Created on: Oct 22, 2016
 *      Author: victor
 *
 *      This contains the source code for the main window of the application
 */


#include <stdio.h>
#include <GL/glut.h>
#include "basicsquare.h"

void windowDisplayCallback() {
	glClearColor(0.2f,0.9f,0.6f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	drawSquare();
	glFlush();
}

void initWindow(int argc, char **argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Main Window");
	glutDisplayFunc(windowDisplayCallback);
	glutMainLoop();
}
