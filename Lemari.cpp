#define _USE_MATH_DEFINES 

#include <cstdlib>
#include <cmath>
#include <iostream>

#include <GL/glew.h>
#include <GL/freeglut.h> 
#define pi = 3.14

//MUHAMMAD ANDHIKA ADHISATYA
//5221600011
//ALFIAN MAJIDDAN NUR
//5221600021

static float X = 0.0;
static float Y = 0.0;
static float Z = -9.0;

void drawScene(void){
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glLoadIdentity();
	glTranslatef(X, Y, Z);


//BOX ATAS
    glPushMatrix();
    glColor4f(0.0,0.0,0.0,0.0);
	glRotatef(1,0,90,0);
	glTranslatef(0,2.5,-2.0);
    glutSolidCube(6.5);
    glPopMatrix();


// kubus bagian dalem	
	glPushMatrix();
	glColor4f(1.0,1.0,1.0,1.0);
	glRotatef(0,0,0,0);
	glTranslatef(-3.0,5.0,-5.0);
	glutSolidCube(3);
	glPopMatrix();

	glPushMatrix();
	glColor4f(1.0,1.0,1.0,1.0);
	glRotatef(0,0,0,0);
	glTranslatef(3.0,5.0,-5.0);
	glutSolidCube(3);
	glPopMatrix();

	glPushMatrix();
	glColor4f(1.0,1.0,1.0,1.0);
	glRotatef(0,0,0,0);
	glTranslatef(-3.0,-5.0,-5.0);
	glutSolidCube(3);
	glPopMatrix();

	glPushMatrix();
	glColor4f(1.0,1.0,1.0,1.0);
	glRotatef(0,0,0,0);
	glTranslatef(3.0,-5.0,-5.0);
	glutSolidCube(3);
	glPopMatrix();

	glPushMatrix();
	glColor4f(1.0,1.0,1.0,1.0);
	glRotatef(0,0,0,0);
	glTranslatef(-3.0,0.0,-5.0);
	glutSolidCube(3);
	glPopMatrix();

	glPushMatrix();
	glColor4f(1.0,1.0,1.0,1.0);
	glRotatef(0,0,0,0);
	glTranslatef(3.0,0.0,-5.0);
	glutSolidCube(3);
	glPopMatrix();

	glPushMatrix();
	glColor4f(1.0,1.0,1.0,1.0);
	glRotatef(0,0,0,0);
	glTranslatef(3.0,0.0,-5.0);
	glutSolidCube(3);
	glPopMatrix();

		
	// cylinder tegak tengah
	glPushMatrix();
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,1,0,0);
	glTranslatef(0.0,4.0,-3.0);
	glutSolidCylinder(0.58,6,20,20);
	glPopMatrix();

	//cylinder tegak kanan
	
	glPushMatrix();
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,1,0,0);
	glTranslatef(1.8,4.0,-3.0);
	glutSolidCylinder(0.3,6,20,20);
	glPopMatrix();
	
	//cylinder tegak kiri
	
	glPushMatrix();
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,1,0,0);
	glTranslatef(-1.8,4.0,-3.0);
	glutSolidCylinder(0.3,6,20,20);
	glPopMatrix();
	
	//cylinder turu atas
	glPushMatrix();
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,0,1,0);
	glTranslatef(-1.8,4.0,-3.0);
	glutSolidCylinder(0.3,6,20,20);
	glPopMatrix();

	//cylinder turu atas tengah 
	glPushMatrix();
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,0,1,0);
	glTranslatef(-1.43,1.35,-3.0);
	glutSolidCylinder(0.45,5.8,20,20);
	glPopMatrix();

	//cylinder turu bawah tengah 
	glPushMatrix();
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,0,1,0);
	glTranslatef(-1.43,-1.35,-3.0);
	glutSolidCylinder(0.45,5.8,20,20);
	glPopMatrix();
	
	//cylinder turu bawah
	glPushMatrix();
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,0,1,0);
	glTranslatef(-1.8,-4.0,-3.0);
	glutSolidCylinder(0.3,6,20,20);
	glPopMatrix();
	



	glFlush();
	glutSwapBuffers();
}

void setup(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
}

// OpenGL window reshape routine.
void resize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-5.0, 5.0, -5.0, 5.0, 5.0, 100.0);

	glMatrixMode(GL_MODELVIEW);
}

// Keyboard input processing routine.
void keyInput(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;
	case 'a':
		X+=0.5;
		glutPostRedisplay();
		break;
	case 'd':
		X -= 0.5;
		glutPostRedisplay();
		break;
	case 's':
		Y -= 0.5;
		glutPostRedisplay();
		break;
	case 'w':
		Y += 0.5;
		glutPostRedisplay();
		break;
	case 'q':
		Z -= 0.5;
		glutPostRedisplay();
		break;
	case 'e':
		Z += 0.5;
		glutPostRedisplay();
		break;
	default:
		break;
	}
}

// Main routine.
int main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitContextVersion(4, 3);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("lemari.cpp");
	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);

	glewExperimental = GL_TRUE;
	glewInit();

	setup();

	glutMainLoop();
}