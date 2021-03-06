#include "glew.h"
#include <GLFW/glfw3.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <app/Application.h>
#include "utils/utils.h"

int main() {
    const int width = 640;
    const int height = 480;
    std::string name = "My test application";
    printf("Starting glew Init\n");
    GLenum err = glewInit();
    if (GLEW_OK != err) {
        fprintf(stderr, "Error initializing glew. Msg: %d", err);
        return 1;
    }
    fprintf(stdout, "Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));
    Application app(height, width, name.c_str());
    app.loop();
    Application::cleanup();
    return 0;
}