#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

class Crafting {
    public:
        Crafting();
        void DrawCraftingFrame(SDL_Renderer* renderer);
    private:
        //Crafting Frame
        int _frameHeight;
        int _frameWidth;
        int _frameX;
        int _frameY;
};