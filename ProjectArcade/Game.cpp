#include "Game.h"
#include <SFML/Graphics.hpp>

Game::Game()
{
    window.create(VideoMode(WIDTH, HEIGHT), "Project Arcade");
    score = 0;
}

void Game::Run()
{
    
    while(window.isOpen())
    {
        window.display();
        Event event;
        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed)
                window.close();
        }
    }
}
