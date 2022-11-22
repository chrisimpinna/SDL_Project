#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

enum class GameState {PLAY, EXIT};
enum class MenuOpen {INVENTORY, NONE};
enum class CurrentScreen {CRAFTING, EXPEDITIONS};

class Game {
    public:
        Game();
        ~Game();
        void run();
        SDL_Renderer* renderer;
    private:
        void _init(const char* title, int x, int y, int w, int h, Uint32 flags);
        void _gameLoop();
        SDL_Event _handleEvents();

        SDL_Window* _window;
        
        int _screenWidth;
        int _screenHeight;

        GameState _gameState;
        MenuOpen _menuOpen;
        CurrentScreen _currentScreen;
};