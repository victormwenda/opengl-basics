/*
 * text.c
 *
 *  Created on: Feb 13, 2016
 *      Author: victor
 */

#include<stdio.h>
#include<stdlib.h>

#include <GL/glut.h>

/* Called when OpenGL needs to update the display */
void display(void) {

	glClear(GL_COLOR_BUFFER_BIT);/* Clear the window */
	glFlush();/* Force update of screen */

}
int main(int argc, char** argv) {

	glutInit(&argc, argv);/* Initialise OpenGL */
	glutCreateWindow("Basic Window"); /* Create the window */
	glutDisplayFunc(display); /* Register the "display" function */
	glutMainLoop();
	return 0;
}
