//============================================================================
// Name        : test.cpp
// Author      : krock
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Tileset.h"
#include "Level.h"
#include "Editor.h"

using namespace std;

const int SCREEN_WIDTH = 1366;
const int SCREEN_HEIGTH = 768;


int main()
{
	//Loading tileset
	Tileset tileset{0};
	//Loading Lvl
	Level level{0};
	//Editor
	Editor editor;

	sf::View view(sf::Vector2f((float)SCREEN_WIDTH/2, (float)SCREEN_HEIGTH/2), sf::Vector2f(static_cast<float>(SCREEN_WIDTH), static_cast<float>(SCREEN_HEIGTH)));
	sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGTH, desktop.bitsPerPixel), "SFML works!"/*, sf::Style::Fullscreen*/);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::Resized){
            }
            if (event.type == sf::Event::KeyReleased){
            	if (sf::Keyboard::Key::A == event.key.code){

            	}
            	if (sf::Keyboard::Key::Z == event.key.code){

				}
            }
        }

        window.setView(view);
        window.clear();
        //level.displayLvl(window, tileset);
        editor.display(window);
        window.display();
    }

    return 0;
}
