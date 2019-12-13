#include<GL/glut.h>
#include<GL/gl.h>

float angle = 0.0f;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glRotatef(angle, 0.0,0.0, 1.0);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glEnd();
	glFlush();
}

void keyPress(int key, int x, int y)
{
	if(key == 27)
		exit(0);
	if(key == GLUT_KEY_RIGHT)
		angle+=5;
	if(key == GLUT_KEY_LEFT)
		angle-=5;
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Triangle");
	glutDisplayFunc(display);
	glutSpecialFunc(keyPress);
	glutMainLoop();
}
