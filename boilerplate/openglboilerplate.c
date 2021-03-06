#include <GL/glut.h>

void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glutSwapBuffers();
}

void init()
{
	glClearColor(0.3, 0.3, 0.3);
	gluOrtho2D(0, 1024, 512, 0);
}

int main(int argc, char** argv)
{ 
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
 glutInitWindowSize(640,640);
 glutCreateWindow("Kevin Raycasting");
 glutDisplayFunc(display);
 glutMainLoop();
}
