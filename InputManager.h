#pragma once

#include "SFML/Graphics.hpp"

namespace KaCa
{
    class InputManager
    {
    public:
        InputManager( ) { }
        ~InputManager( ) { }

        bool isSpriteClicked( sf::Sprite object, sf::Mouse::Button btn, sf::RenderWindow &window );

        sf::Vector2i GetMousePosition( sf::RenderWindow &window );
    };
}
