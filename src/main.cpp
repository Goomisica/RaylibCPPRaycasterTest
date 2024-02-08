#include "include/raylib-cpp.hpp"

#include "myincludes/scenes.hpp"
#include "myincludes/currentScreen.hpp"
#include "myincludes/empty.hpp"
#include "myincludes/drawableList.hpp"
#include "myincludes/ezText.hpp"

int main() {
    const int screenWidth = 320;
    const int screenHeight = 240;

    raylib::Window window(screenWidth, screenHeight, "Title", FLAG_WINDOW_RESIZABLE);
    SizeScaling scaling(&window);
    Scenes app(&scaling);

    EzText hello(*(new raylib::Text(GetFontDefault(), "testing1", 10.0 * scaling.xMult(), 1.0 * scaling.xMult())), WHITE);
    EzText hello2(*(new raylib::Text(GetFontDefault(), "testing2", 10.0 * scaling.xMult(), 1.0 * scaling.xMult())), WHITE);

    DrawableList textList;
    textList.add(&hello);
    textList.add(&hello);
    textList.add(&hello2);

    while(!window.ShouldClose()) {
        window.BeginDrawing();    

            (textList).draw(40,50);

            app.drawScene();

        window.EndDrawing();
    }

    return 0;
}