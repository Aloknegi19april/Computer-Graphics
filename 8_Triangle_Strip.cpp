#include<GL/glut.h>
#include<GL/gl.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-0.6,-0.4);    
	glVertex2f(-0.6,0.2);    
	glVertex2f(-0.3,-0.3);    
	glVertex2f(-0.2,0.3);    
	glVertex2f(0.0,-0.1);
	glVertex2f(0.1,0.1);  
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Triangle");
	glutDisplayFunc(display);
	glutMainLoop();
}
