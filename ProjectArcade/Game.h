#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

class Game
{
private:
    int WIDTH = 800;
    int HEIGHT = 600;
    RenderWindow window;
    int score = 0;
public:
    Game();
    void Run();
};
