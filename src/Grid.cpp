/*
 * Grid.cpp
 *
 *  Created on: 31 déc. 2018
 *      Author: krock
 */

#include "Grid.h"

Grid::Grid() {

	if (!texture.loadFromFile("assets/grid.png")){
		std::cerr << "Error while loading grid.png" << std::endl;
	}

	sprite.setTexture(texture);
	sprite.setPosition(0,0);


}

void Grid::display(sf::RenderWindow &window){
	window.draw(sprite);
}

