#include <GL/glut.h> 
#include <iostream> 
using namespace std; 
int rx, ry; 
int x = 0; 
int y; 
void Init(void) { 
glClearColor(1.0, 1.0, 1.0, 0.0); 
glColor3f(0, 0, 0); 
glOrtho(-500, 500, 500, -500, 0, 1); 
} 
void drawPoints(int x, int y, int rx, int ry) { 
glBegin(GL_POINTS); 
glVertex2i(x + rx, y + ry); 
glVertex2i(-x + rx, y + ry); 
glVertex2i(x + rx, -y + ry); 
glVertex2i(-x + rx, -y + ry); 
glEnd(); 
glFlush(); 
} 
void ellipse() { 
glClear(GL_COLOR_BUFFER_BIT); 
int d1 = (ry * ry) + (0.25 * (rx * rx)) - (rx * rx * ry); int dy = 2 * rx * rx * y; 
int dx = 2 * ry * ry * x; 
// Add a loop to continue drawing the ellipse 
while (dy > dx) { 
drawPoints(x, y, rx, ry); 
if (d1 < 0) { 
x = x + 1; 
y = y; 
d1 = d1 + dx + (ry * ry); 
} else { 
x = x + 1; 
y = y - 1; 
d1 = d1 + dx - dy + (ry * ry); 
} 
dx = 2 * ry * ry * x; 
dy = 2 * rx * rx * y; 
}
drawPoints(x, y, rx, ry); 
glFlush(); 
} 
int main(int argc, char **argv) { 
glutInit(&argc, argv); 
glutInitWindowSize(500, 500); 
glutInitWindowPosition(100, 100); 
glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); glutCreateWindow("Mid point ellipse drawing algo"); cout << "CHALO CODE KREN" << endl; 
cout << "Enter the value of rx: "; 
cin >> rx; 
cout << "Enter the value of ry: "; 
cin >> ry; 
Init(); 
glutDisplayFunc(ellipse); 
glutMainLoop(); 
return 0; 
} 
