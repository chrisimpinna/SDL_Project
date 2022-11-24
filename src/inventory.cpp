#include <iostream>
#include <SDL.h>
#include <inventory.h>
#include <primitiveDrawing.h>
#include <colors.h>
#define sizeOf(type) ((char *)(&type+1)-(char*)(&type));

int inventoryPositions[100][4] = {};

void Inventory::DrawInventory(SDL_Renderer* renderer) {
    //Drawing the Frame
    Colors _colors;
    drawRectangle(_frameX, _frameY, _frameWidth, _frameHeight, _colors.ColorSet1_1, renderer);
    Inventory::drawItems(renderer);
};

bool Inventory::mouseClickingItem(int mouseX, int mouseY) {
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=3; j++) {
            printf("%d\n", inventoryPositions[i][j]);
        };
    };

    return true;
};

void Inventory::drawItems(SDL_Renderer* renderer) {
    Colors _colors;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (InventoryContents[i][j] == "sl") {
                drawRectangle(_frameX, _frameY+i*150, 100, 100, _colors.ColorSet1_4, renderer);
                inventoryPositions[i][0] = _frameX;
                inventoryPositions[i][1] = _frameY+i*150;
                inventoryPositions[i][2] = 100;
                inventoryPositions[i][3] = 100;
            }
        }
    }
};