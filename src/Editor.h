/*
 * Editor.h
 *
 *  Created on: 6 janv. 2019
 *      Author: krock
 */

#ifndef EDITOR_H_
#define EDITOR_H_

#include <SFML/Graphics.hpp>
#include <iostream>

class Editor {
public:
	Editor();

	void display (sf::RenderWindow& window);

private:

	sf::Texture textureBgTexure;
	sf::Texture textureBtLeft;
	sf::Texture textureBtLeftClicked;
	sf::Texture textureBtRight;
	sf::Texture textureBtRightClicked;
	sf::Texture textureGomme;

	sf::Sprite spriteBg;
	sf::Sprite spriteBtLeft;
	sf::Sprite spriteBtLeftClicked;
	sf::Sprite spriteBtRight;
	sf::Sprite spriteBtRightClicked;
	sf::Sprite spriteGomme;

};

#endif /* EDITOR_H_ */
