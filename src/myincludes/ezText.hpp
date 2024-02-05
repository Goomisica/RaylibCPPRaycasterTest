#ifndef EZTEXT_HPP
#define EZTEXT_HPP

#include "../include/raylib-cpp.hpp"
#include "drawable.hpp"

class EzText : Drawable {
    private:
        raylib::Text text;
        raylib::Color drawColor;
    public:
        EzText(raylib::Text text, raylib::Color drawColor) {
            this->text = text;
            this->drawColor = drawColor;
        }
        void draw(int x, int y) override {
            this->text.Draw(this->text.GetText(), (Vector2){x,y}, text.GetFontSize(), this->drawColor);
        }

        float getWidth() override {
            this->text.MeasureEx().x;
        } 
        float getHeight() override {
            this->text.MeasureEx().y;
        }
};

#endif