#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <inventory.h>

enum class MouseState {NONE, HOLDINGITEM};

class Mouse {
    public:
        Mouse();
        void CheckMouse(SDL_Renderer* renderer, SDL_Event evnt);

        int MouseX;
        int MouseY;
    private:
        int _MouseWidth = 10;
        int _MouseHeight = 10;

        MouseState _mouseState;
};