#include "lve_window.hpp"


namespace lve{
    LveWindow::LveWindow(int width, int height, std::string windowName) : width {width}, height {height}, windowName {windowName} {
        initWindow();
    }  
    void LveWindow::initWindow(){
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_NO_API);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }

    LveWindow::~LveWindow(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }

}