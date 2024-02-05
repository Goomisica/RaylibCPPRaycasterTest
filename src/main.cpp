#include "include/raylib-cpp.hpp"

#include "myincludes/scenes.hpp"

int main() {
    const int screenWidth = 640;
    const int screenHeight = 480;

    raylib::Window window(screenWidth, screenHeight, "Title");
    Scenes app;


    while(!window.ShouldClose()) {
        window.BeginDrawing();        

            app.drawScene();

        window.EndDrawing();
    }

    return 0;
}