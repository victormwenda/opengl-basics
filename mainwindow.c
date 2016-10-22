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

void windowDisplayCallback() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void initWindow(int argc, char **argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Main Window");
	glutDisplayFunc(windowDisplayCallback);
	glutMainLoop();
}
