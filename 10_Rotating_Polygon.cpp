#include<GL/glut.h>
#include<GL/gl.h>

float angle = 0.0f;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 1.0);
	glRotatef(angle, 0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.2, 0.2, 0.0);
	glVertex3f(0.2, 0.2, 0.0);
	glVertex3f(0.2, -0.2, 0.0);
	glVertex3f(-0.2, -0.2, 0.0);
	glEnd();
	glFlush();
}

void update(int x)
{
	angle+=2.0f;
	
	if(angle >= 360)
		angle-=360;
		
	glutPostRedisplay();
	glutTimerFunc(150, update, 0);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("POLYGON");
	glutDisplayFunc(display);
	glutTimerFunc(150, update, 0);
	glutMainLoop();
}
