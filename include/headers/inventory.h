#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <string>
using namespace std;

class Inventory {
    public:
        Inventory();
        void DrawInventory(SDL_Renderer* renderer);
        void drawItems(SDL_Renderer* renderer);
        bool mouseClickingItem(int mouseX, int mouseY);

        string InventoryContents[2][2] = {
            {"sl", "item_name"},
            {"sl", "item_name2"}
        };
    private:
        //Inventory Frame
        int _frameHeight = 600;
        int _frameWidth = 300;
        int _frameX = 700;
        int _frameY = 0;
};