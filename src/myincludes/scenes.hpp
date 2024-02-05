#ifndef SCENES_HPP
#define SCENES_HPP

#include "currentScreen.hpp"
#include "../include/raylib-cpp.hpp"

class Scenes {

    private:
        CURRENTSCREEN screen = GAME;

        raylib::Rectangle* rect = new raylib::Rectangle(0, 0, 250, 250);

        void mainMenu() {

        }
        void game() {
            rect->Draw(WHITE);
        }
        void settings() {

        }
        void levelEditorInit() {

        }
        void levelEditor() {

        }
    public:
        void drawScene() {
            switch (this->screen)
            {
                case MAINMENU:
                    this->mainMenu();
                    break;
                case GAME:
                    this->game();
                    break;
                case SETTINGS:
                    this->settings();
                    break;
                case LEVELEDITORINIT:
                    this->levelEditorInit();
                    break;
                case LEVELEDITOR:
                    this->levelEditor();
                    break;
                default:
                    break;
            }
        }
};

#endif