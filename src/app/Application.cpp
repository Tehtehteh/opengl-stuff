//
// Created by selv on 18.04.19.
//
#include <iostream>
#include "Application.h"

Application::Application(int height, int width, char *name) {
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
        this->cleanup();
    }
}

void Application::loop() {
    while (!glfwWindowShouldClose(this->window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

void Application::cleanup() {
    glfwTerminate();
}
