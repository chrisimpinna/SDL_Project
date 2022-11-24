#include <mouse.h>
#include <iostream>
#include <SDL.h>
#include <primitiveDrawing.h>
#include <inventory.h>
#include <string>
#include <game.h>
#define sizeOf(type) ((char *)(&type+1)-(char*)(&type))

//-------------------------------------------------------------------------------------
//------------------Mouse Definitions--------------------------------------------------
//-------------------------------------------------------------------------------------

void Mouse::CheckMouse(SDL_Renderer* _renderer, SDL_Event evnt) {
    drawRectangle(MouseX, MouseY, _MouseWidth, _MouseHeight, {255, 0, 0, 255}, _renderer);

    switch (evnt.type) {
        extern int inventoryPositions[100][4];
        case SDL_MOUSEMOTION:
            MouseX = evnt.motion.x;
            MouseY = evnt.motion.y;
        case SDL_MOUSEBUTTONDOWN:
            if(evnt.button.button == SDL_BUTTON_LEFT){
                if (_mouseState != MouseState::HOLDINGITEM) {
                    for (int i = 0; i<2; i++) {
                        if (MouseX>=inventoryPositions[i][0] && MouseX<=inventoryPositions[i][0] + inventoryPositions[i][2]) {
                            if (MouseY>=inventoryPositions[i][1] && MouseY<=inventoryPositions[i][1] + inventoryPositions[i][3]) {
                                printf("ItemClicked");
                                _mouseState = MouseState::HOLDINGITEM;
                            }
                        }
                    };
                };
            };
    };
};