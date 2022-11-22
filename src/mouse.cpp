#include <mouse.h>
#include <iostream>
#include <SDL.h>
#include <primitiveDrawing.h>

//-------------------------------------------------------------------------------------
//------------------Mouse Definitions--------------------------------------------------
//-------------------------------------------------------------------------------------

void Mouse::CheckMouse(SDL_Renderer* _renderer, SDL_Event evnt) {
    drawRectangle(MouseX, MouseY, _MouseWidth, _MouseHeight, {255, 0, 0, 255}, _renderer);

    switch (evnt.type) {
        case SDL_MOUSEMOTION:
            MouseX = evnt.motion.x;
            MouseY = evnt.motion.y;
    };
};