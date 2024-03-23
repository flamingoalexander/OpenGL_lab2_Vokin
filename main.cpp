#include <GLFW/glfw3.h>
void DrawRectangle(float XfirstCord, float YfirstCord, float XsecondCord, float YsecondCord) {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(XfirstCord, YfirstCord);
    glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(XsecondCord, YfirstCord);
    glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(XsecondCord, YsecondCord);

    glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(XsecondCord, YsecondCord);
    glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(XfirstCord, YsecondCord);
    glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(XfirstCord, YfirstCord);
    glEnd();
}
int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        DrawRectangle(-0.5, 0.5, 0.5, -0.5);
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}