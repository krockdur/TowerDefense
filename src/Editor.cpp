/*
 * Editor.cpp
 *
 *  Created on: 6 janv. 2019
 *      Author: krock
 */

#include "Editor.h"

Editor::Editor() {
	if (!textureBgTexure.loadFromFile("assets/editor/background.png")){
		std::cerr << "Error while loading background.png" << std::endl;
	}
	if (!textureGomme.loadFromFile("assets/editor/gomme.png")){
		std::cerr << "Error while loading background.png" << std::endl;
	}
	if (!textureBtLeft.loadFromFile("assets/editor/left_button.png")){
		std::cerr << "Error while loading background.png" << std::endl;
	}
	if (!textureBtLeftClicked.loadFromFile("assets/editor/left_button_clicked.png")){
		std::cerr << "Error while loading background.png" << std::endl;
	}
	if (!textureBtRight.loadFromFile("assets/editor/right_button.png")){
		std::cerr << "Error while loading background.png" << std::endl;
	}
	if (!textureBtRightClicked.loadFromFile("assets/editor/right_button_clicked.png")){
		std::cerr << "Error while loading background.png" << std::endl;
	}


	spriteBg.setTexture(textureBgTexure);
	spriteBg.setPosition(0.f, 0.f);

	spriteBtLeft.setTexture(textureBtLeft);
	spriteBtLeft.setPosition(11.f, 651.f);

	spriteBtLeftClicked.setTexture(textureBtLeftClicked);
	spriteBtLeftClicked.setPosition(11.0f, 651.f);

	spriteBtRight.setTexture(textureBtRight);
	spriteBtRight.setPosition(1150.f, 651.f);

	spriteBtRightClicked.setTexture(textureBtRightClicked);
	spriteBtRightClicked.setPosition(1150.f, 651.f);

	spriteGomme.setTexture(textureGomme);
	spriteGomme.setPosition(1242.f, 668.f);

}


void Editor::display(sf::RenderWindow& window){
	window.draw(spriteBg);
	window.draw(spriteBtLeft);
	window.draw(spriteBtLeftClicked);
	window.draw(spriteBtRight);
	window.draw(spriteBtRightClicked);
	window.draw(spriteGomme);

}
