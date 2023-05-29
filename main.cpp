//
//  main.cpp
//  2D shooter
//
//  Created by Evan Yu on 2023/5/27.
//

#include "Game.hpp"

Game* game = nullptr;
int main(int argc, char* argv[]) {
    
    game = new Game();
    game->init("2D Shooter", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, false);
    
    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }
    
    game->clean();
    return 0;
}
