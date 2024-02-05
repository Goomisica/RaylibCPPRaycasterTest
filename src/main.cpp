#include "include/raylib-cpp.hpp"

#include "myincludes/scenes.hpp"
#include "myincludes/currentScreen.hpp"

int main() {
    const int screenWidth = 320;
    const int screenHeight = 240;

    raylib::Window window(screenWidth, screenHeight, "Title", FLAG_WINDOW_RESIZABLE);
    SizeScaling scaling(&window);
    Scenes app(&scaling);


    while(!window.ShouldClose()) {
        window.BeginDrawing();        

            app.drawScene();

        window.EndDrawing();
    }

    return 0;
}