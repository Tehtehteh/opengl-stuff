#include <GLFW/glfw3.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <app/Application.h>
#include "utils/utils.h"


int main() {
    const int width = 640;
    const int height = 480;
    char *name = "My test program.";
    Application app(height, width, name);
    app.loop();
    app.cleanup();
    return 0;
}