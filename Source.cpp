#include <GL/glut.h>
#include <string.h>
#include<cmath>
void drawText(const char* text, float x, float y) {
    glRasterPos2f(x, y);
    for (int i = 0; i < strlen(text); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}
bool darkMode = false;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    if (darkMode) {
        glColor3f(0.0f, 0.0f, 0.0f); // Black Sky
    }
    else {
        glColor3f(0.5f, 0.8f, 1.0f); // Light Blue Sky
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();

    // Green Ground
    glColor3f(0.0f, 0.8f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();

    // Road
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(1.0f, -0.8f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glEnd();

    // Car
    glColor3f(1.0f, 0.0f, 0.0f); // Red car lower body
    glBegin(GL_QUADS);
    glVertex2f(-0.7f, -0.72f);
    glVertex2f(-0.1f, -0.72f);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.7f, -0.65f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f); // Red car middle body
    glBegin(GL_QUADS);
    glVertex2f(-0.65f, -0.7f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-0.6f, -0.6f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f); // Red car upper body
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, -0.6f); 
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-0.3f, -0.55f);
    glVertex2f(-0.5f, -0.55f);  
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); //  car window body
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.67f);
    glVertex2f(-0.35f, -0.67f);
    glVertex2f(-0.35f, -0.63f);
    glVertex2f(-0.45f, -0.63f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Wheels
    glBegin(GL_QUADS);
    glVertex2f(-0.55f, -0.75f);
    glVertex2f(-0.5f, -0.75f);
    glVertex2f(-0.5f, -0.7f);
    glVertex2f(-0.55f, -0.7f);

    glVertex2f(-0.25f, -0.75f);
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.25f, -0.7f);
    glEnd();

    // House 1
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.9f, -0.3f);
    glEnd();

    // House Roof 1
    glColor3f(0.8f, 0.2f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.95f, -0.3f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.8f, -0.1f);
    glEnd();

    // Door
    glColor3f(0.3f, 0.2f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f, -0.5f);
    glVertex2f(-0.78f, -0.5f);
    glVertex2f(-0.78f, -0.4f);
    glVertex2f(-0.82f, -0.4f);
    glEnd();

    // Window 1
    glColor3f(0.5f, 0.8f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.88f, -0.42f);
    glVertex2f(-0.84f, -0.42f);
    glVertex2f(-0.84f, -0.38f);
    glVertex2f(-0.88f, -0.38f);
    glEnd();

    // Window 2
    glBegin(GL_QUADS);
    glVertex2f(-0.76f, -0.42f);
    glVertex2f(-0.72f, -0.42f);
    glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.76f, -0.38f);
    glEnd();

    // House 2
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glEnd();

    // House Roof 2
    glColor3f(0.8f, 0.2f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.95f, -0.3f);
    glVertex2f(0.8f, -0.1f);
    glEnd();

    // Door 2
    glColor3f(0.3f, 0.2f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(0.78f, -0.5f);
    glVertex2f(0.82f, -0.5f);
    glVertex2f(0.82f, -0.4f);
    glVertex2f(0.78f, -0.4f);
    glEnd();

    // Window 1
    glColor3f(0.5f, 0.8f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.72f, -0.42f);
    glVertex2f(0.76f, -0.42f);
    glVertex2f(0.76f, -0.38f);
    glVertex2f(0.72f, -0.38f);
    glEnd();

    // Window 2
    glBegin(GL_QUADS);
    glVertex2f(0.84f, -0.42f);
    glVertex2f(0.88f, -0.42f);
    glVertex2f(0.88f, -0.38f);
    glVertex2f(0.84f, -0.38f);
    glEnd();

    // Sun
    glColor3f(1.0f, 1.0f, 0.0f);
    float x, y, angle;
    int i;
    int triangleAmount = 20;
    float radius = 0.1f;
    float twicePi = 2.0f * 3.14159f;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.7f, 0.8f); // Center of circle
    for (i = 0; i <= triangleAmount; i++) {
        angle = i * twicePi / triangleAmount;
        x = radius * cos(angle);
        y = radius * sin(angle);
        glVertex2f(x + 0.7f, y + 0.8f);
    }
    glEnd();

    // Mountains
    glColor3f(0.3f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.85f, 0.4f);
    //2nd mountain
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.55f, 0.4f);
    //3rd mountain
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.23f, 0.4f);
    //4th mountain
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.15f, 0.0f);
    glVertex2f(0.05f, 0.4f);
    //5th mountain
    glVertex2f(0.15f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.25f, 0.4f);
    //6th mountain
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.55f, 0.4f);
    //7th mountain
    glVertex2f(0.7f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(0.85f, 0.4f);
    glEnd();

    // Box with text
    glColor3f(0.9f, 0.9f, 0.9f); // Light gray box
    glBegin(GL_QUADS);
    glVertex2f(0.5f, -0.8f);
    glVertex2f(0.9f, -0.8f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.5f, -0.6f);
    glEnd();

    // Text
    glColor3f(0.0f, 0.0f, 0.0f); // Black text
    drawText("Saumya Singh 500106331", 0.55f, -0.7f);

    glFlush();
}
void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        darkMode = !darkMode; // Toggle dark mode
        glutPostRedisplay();  // Request a redisplay to update colors
    }
}

void init() {
    glClearColor(0.5f, 0.8f, 1.0f, 1.0f); //  bg color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -0.8, 1.0); // coordinate system for the window
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600); // Window size
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Scenery");

    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}
