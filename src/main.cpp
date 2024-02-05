#include "include/raylib-cpp.hpp"

int main() {
    const int screenWidth = 640;
    const int screenHeight = 480;

    raylib::Window window(screenWidth, screenHeight, "Title");


    raylib::Text helloText(GetFontDefault(), "Hello, World!", window.GetWidth()/10.0, 1.0);

    while(!window.ShouldClose()) {
        window.BeginDrawing();

            window.ClearBackground(BLACK);
            helloText.Draw(window.GetWidth()/2.0 - helloText.MeasureEx().x/2.0, window.GetHeight()/2.0 - helloText.MeasureEx().y/2.0);
            


        window.EndDrawing();
    }

    return 0;
}