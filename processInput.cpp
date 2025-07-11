#include "camera.h"
#include "processInput.h"
#define IMGUI_IMPL_OPENGL_LOADER_GLAD
#include "imgui.h"
extern Camera camera;
extern float deltaTime;

void processInput(GLFWwindow* window)
{   
    //ImGuiIO& io = ImGui::GetIO();
    //if (!io.WantCaptureKeyboard) {
    //    processInput(window); // Your camera/WASD code
    //}
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    // camera user control 
    float cameraSpeed = 2.5f * deltaTime;
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera.ProcessKeyboard(FORWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera.ProcessKeyboard(BACKWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera.ProcessKeyboard(LEFT, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera.ProcessKeyboard(RIGHT, deltaTime);
}