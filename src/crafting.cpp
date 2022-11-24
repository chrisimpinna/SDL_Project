#include <iostream>
#include <SDL.h>
#include <crafting.h>
#include <primitiveDrawing.h>
#include <colors.h>

void Crafting::DrawCraftingMenu(SDL_Renderer* renderer) {
    //Drawing the Frame
    Colors _colors;
    drawRectangle(_frameX, _frameY, _frameWidth, _frameHeight, _colors.ColorSet1_4, renderer);

    //Crafting Slots
    drawRectangle(_inputX1, _inputY1, _inputWidth, _inputHeight, _colors.ColorSet1_3, renderer);
    drawRectangle(_inputX2, _inputY2, _inputWidth, _inputHeight, _colors.ColorSet1_3, renderer);

    //Output Slot
    drawRectangle(_outputX, _outputY, _inputWidth, _inputHeight, _colors.ColorSet1_5, renderer);
};