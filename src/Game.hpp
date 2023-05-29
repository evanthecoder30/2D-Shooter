//
//  Game.hpp
//  2D shooter
//
//  Created by Evan Yu on 2023/5/29.
//

#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <SDL2_image/SDL_image.h>

class Game {
    
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning = true;
    
public:
    Game();
    ~Game();
    
    void init(const char* title, int xpos, int ypos, int height, int width, int flags);
    void render();
    void update();
    void handleEvents();
    void clean();

    bool running();
    
};

#endif /* Game_hpp */
