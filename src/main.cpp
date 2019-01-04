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

using namespace std;

const int SCREEN_WIDTH = 1366;
const int SCREEN_HEIGTH = 768;


int main()
{
	//Loading tileset
	Tileset tileset{0};
	//Loading Lvl
	Level level{0};

	sf::View view(sf::Vector2f((float)SCREEN_WIDTH/2, (float)SCREEN_HEIGTH/2), sf::Vector2f((float)SCREEN_WIDTH, (float)SCREEN_HEIGTH));
	sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGTH, desktop.bitsPerPixel), "SFML works!"/*, sf::Style::Fullscreen*/);


	sf::Texture t;
	t.loadFromFile("assets/test-bg.png");
	sf::Sprite s(t);
	s.setPosition(0.f, 0.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::Resized){
            	//New size of the view
            	float aspectRatio = float(window.getSize().x) / float(window.getSize().y);

            	if (window.getSize().x < window.getSize().y)
            		view.setSize(float(SCREEN_HEIGTH) * aspectRatio, float(SCREEN_HEIGTH) * aspectRatio);
            	if (window.getSize().x > window.getSize().y)
					view.setSize(float(SCREEN_WIDTH) * aspectRatio, float(SCREEN_WIDTH) * aspectRatio);

            }
        }

        window.clear();
        window.setView(view);
        //level.displayLvl(window, tileset);
        window.draw(s);
        window.display();
    }

    return 0;
}
