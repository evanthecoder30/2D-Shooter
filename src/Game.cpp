//
//  Game.cpp
//  2D shooter
//
//  Created by Evan Yu on 2023/5/29.
//

#include "Game.hpp"

Game::Game() {
    
}


Game::~Game() {
    
}

void Game::init(const char* title, int xpos, int ypos, int height, int width, int flags) {
    if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) {
        window = SDL_CreateWindow(title, xpos, ypos, height, width, flags);
        renderer = SDL_CreateRenderer(window, -1, 0);
    }
    
}

void Game::render() {
    // clear the window to black
    SDL_RenderClear(renderer);

    // show the window
    SDL_RenderPresent(renderer);
}

void Game::update() {
    
}

void Game::handleEvents() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false;
    default:
        break;
    }
}

void Game::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

bool Game::running() {
    return isRunning;
}
