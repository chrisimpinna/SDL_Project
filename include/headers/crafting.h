#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

class Crafting {
    public:
        Crafting();
        void DrawCraftingMenu(SDL_Renderer* renderer);
    private:
        //Crafting Frame
        int _frameHeight = 250;
        int _frameWidth = 700;
        int _frameX = 0;
        int _frameY = 125;

        //Input Boxes
        int _inputHeight = 100;
        int _inputWidth = 100;
        int _inputX1 = (_frameWidth/2) - _inputWidth/2 + _frameX;
        int _inputY1 = (_frameHeight/2) - _inputHeight/2 + _frameY;
        int _inputX2 = (_frameWidth/4) - _inputWidth/2 + _frameX;
        int _inputY2 = (_frameHeight/2) - _inputHeight/2 + _frameY;

        //Output Boxes
        int _outputX = (_frameWidth/4)*3 - _inputWidth/2 + _frameX;
        int _outputY = (_frameHeight/2) - _inputHeight/2 + _frameY;
};