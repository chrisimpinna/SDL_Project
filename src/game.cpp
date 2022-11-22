#include <game.h>
#include <mouse.h>
#include <crafting.h>
#include <primitiveDrawing.h>
#include <crafting.h>

//-------------------------------------------------------------------------------------
//------------------Header Initiltializations--------------------------------------------
//-------------------------------------------------------------------------------------

Game::Game() {
    _window = nullptr;
    renderer = nullptr;
    _screenWidth = 1024;
    _screenHeight = 600;
    _gameState = GameState::PLAY;
    _currentScreen = CurrentScreen::CRAFTING;
    _menuOpen = MenuOpen::NONE;
};

Game::~Game() {};

Mouse::Mouse() {
    SDL_ShowCursor(SDL_DISABLE); 
};

Crafting::Crafting() {
    _frameHeight = 300;
    _frameWidth = 900;
    _frameX = 0;
    _frameY = 0;
};

//-------------------------------------------------------------------------------------
//------------------Game Function Definitions------------------------------------------
//-------------------------------------------------------------------------------------

void Game::run() {
    _init("SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_SHOWN);
    _gameLoop();
}

void Game::_init(const char* title, int x, int y, int w, int h, Uint32 flags) {
    SDL_Init(SDL_INIT_EVERYTHING);

    _window = SDL_CreateWindow(title, x, y, w, h, flags);
    renderer = SDL_CreateRenderer(_window, -1, 0);
}

void Game::_gameLoop() {
    while (_gameState != GameState::EXIT) {
        SDL_Event evnt = _handleEvents();
        SDL_RenderClear(renderer);

        Crafting _craft;
        _craft.DrawCraftingFrame(renderer);

        Mouse _mouse;
        _mouse.CheckMouse(renderer, evnt);

        SDL_SetRenderDrawColor(renderer, 109, 113, 46, 255);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyWindow(_window);
    SDL_Quit();
}

SDL_Event Game::_handleEvents() {
    SDL_Event evnt;
    SDL_PollEvent(&evnt);

    switch (evnt.type) {
        case SDL_QUIT:
            _gameState = GameState::EXIT;
            break;
    }

    return evnt;
}