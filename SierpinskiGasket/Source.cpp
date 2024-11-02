#include<gl/glut.h>
#include<stdio.h>
void display() {

}

int main(int argc, char** argv) {
	int n;
	printf("Enter the no of divisions: ");
	scanf("%d", &n);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutDisplayFunc(display);
	glutMainLoop();
}