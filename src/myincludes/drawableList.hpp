#ifndef DRAWABLELIST_HPP
#define DRAWABLELIST_HPP

#include <vector>
#include "drawable.hpp"
#include "expansionType.hpp"

class DrawableList : Drawable {
    private:
        std::vector<Drawable*> thingsToDraw;
        EXPANSIONTYPE expansionType = VERTICAL;
        bool ignoreChildren = true;
        int seperation;
    public:
        void draw(int x, int y) override {
            int xCurrent = x;
            int yCurrent = y;
            switch(this->expansionType) {
                case HORIZONTAL:

                break;
                case VERTICAL:

                break;
                case NONE:

                break;
            }
        }

        float getWidth() override {
            switch(this->expansionType) {
                case VERTICAL:
                    // if vertical, width is just width of largest element
                    float maxWidth;
                    for (int i = 0; i < this->thingsToDraw.size(); i++) {
                        Drawable* current = this->thingsToDraw.at(i);
                        if (current->getWidth() > maxWidth) {
                            maxWidth = current->getWidth();
                        }
                    }
                    return maxWidth;
                break;
                case HORIZONTAL:
                    // if horizontal, width is the width of all elements added, plus padding
                    float width;
                    for (int i = 0; i < this->thingsToDraw.size(); i++) {
                        Drawable* current = this->thingsToDraw.at(i);
                        width += current->getWidth();
                        // have to remember about the padding!
                        width += (float) this->seperation;
                    }
                    return width;
                break;
                case NONE:
                    // same as vertical
                    float width;
                    for (int i = 0; i < this->thingsToDraw.size(); i++) {
                        Drawable* current = this->thingsToDraw.at(i);
                        if (current->getWidth() > maxWidth) {
                            maxWidth = current->getWidth();
                        }
                    }
                break;
                default:
                    return 0.0f;
            }
        }
        float getHeight() override {
            switch(this->expansionType) {
                case VERTICAL:
                    // all added
                    float height;
                    for (int i = 0; i < this->thingsToDraw.size(); i++) {
                        Drawable* current = this->thingsToDraw.at(i);
                        height += current->getHeight();
                        height += this->seperation;
                    }
                    return height;
                break;
                case HORIZONTAL:
                    // heigest
                    float maxHeight;
                    for (int i = 0; i < this->thingsToDraw.size(); i++) {
                        Drawable* current = this->thingsToDraw.at(i);
                        if (current->getHeight() > maxHeight) {
                           maxHeight = current->getHeight(); 
                        }
                    }
                    return maxHeight;
                    break;
                case NONE:
                    // same as horiz.
                    float maxHeight;
                    for (int i = 0; i < this->thingsToDraw.size(); i++) {
                        Drawable* current = this->thingsToDraw.at(i);
                        if (current->getHeight() > maxHeight) {
                           maxHeight = current->getHeight(); 
                        }
                    }
                    return maxHeight;
                break;
                default:
                    return 0.0f;
            }
        }
};

#endif