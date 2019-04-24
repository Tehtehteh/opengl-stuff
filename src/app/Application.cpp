#include <iostream>
#include "Application.h"

Application::Application(int height, int width, const char *name) {
    this->window_height = height;
    this->window_width = width;
    this->name = name;
    if (0 == glfwInit()) {
        std::cout << "ERROR: Could not initialize GLFW lib.";
    }
    GLFWwindow *w = glfwCreateWindow(this->window_width, this->window_height, this->name, nullptr, nullptr);
    if (w != nullptr) {
        this->window = w;
        glfwMakeContextCurrent(this->window);
        this->initialized = true;
    } else {
        std::cout << "ERROR: Could not initialize glfw window. Terminating";
        Application::cleanup();
    }
}

void Application::loop() {
    std::cout << "INFO: app loop start";
    while (!glfwWindowShouldClose(this->window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    std::cout << "INFO: app loop end";
}

void Application::cleanup() {
    std::cout << "INFO: Cleaning up application.";
    glfwTerminate();
}
