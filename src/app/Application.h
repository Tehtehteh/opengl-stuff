//
// Created by selv on 18.04.19.
//

#ifndef OPENGL_START_APPLICATION_H
#define OPENGL_START_APPLICATION_H


#include <GLFW/glfw3.h>

class Application {
public:
    Application(int height, int width, const char *name);
    int window_height;
    int window_width;
    const char *name;
    bool initialized = false;

    void loop();
    void cleanup();

protected:
    GLFWwindow *window;

};


#endif //OPENGL_START_APPLICATION_H
