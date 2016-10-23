/*
 * basicsquare.c
 *
 *  Created on: Oct 23, 2016
 *      Author: victor
 */

#include <stdio.h>
#include <GL/glut.h>

void drawSquare() {
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.2f, 0.8f);
	glVertex2d(-0.5, -0.5);
	glVertex2d(0.5, -0.5);
	glVertex2d(0.5, 0.5);
	glVertex2d(-0.5, 0.5);
	glEnd();
}

