#include <iostream>
#include <SDL.h>
#include <crafting.h>
#include <primitiveDrawing.h>

void Crafting::DrawCraftingFrame(SDL_Renderer* renderer) {
    //Drawing the Frame
    SDL_Color FrameColor = {0, 255, 0, 255};
    drawRectangle(_frameX, _frameY, _frameWidth, _frameHeight, FrameColor, renderer);
};