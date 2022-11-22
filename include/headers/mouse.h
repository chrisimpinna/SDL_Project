#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

class Mouse {
    public:
        Mouse();
        void CheckMouse(SDL_Renderer* renderer, SDL_Event evnt);

        int MouseX;
        int MouseY;
    private:
        int _MouseWidth;
        int _MouseHeight;
};