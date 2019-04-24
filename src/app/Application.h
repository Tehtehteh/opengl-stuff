#pragma once
#include <GLFW/glfw3.h>

class Application {
public:
    Application(int height, int width, const char *name);
    int window_height;
    int window_width;
    const char *name;
    bool initialized = false;

    void loop();
    static void cleanup();

protected:
    GLFWwindow *window;

};
