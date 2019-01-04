/*
 * Tileset.cpp
 *
 *  Created on: 31 déc. 2018
 *      Author: krock
 */

#include "Tileset.h"

Tileset::Tileset() {
	// TODO Auto-generated constructor stub

}

Tileset::Tileset( int number ) {
	// TODO Auto-generated constructor stub

	if (number == 0){
		if (!texture.loadFromFile("assets/towerDefense_tilesheet.png")){
			std::cerr << "Error while loading towerDefense_tilesheet.png" << std::endl;
		}
		else{
		}
		loadSprite();
	}

}


/**
 * Load a texture in the tab tile
 */
void Tileset::loadSprite(){

	sf::Sprite sprite;
	sprite.setTexture(texture);

	int id = 0;
	for (int i = 0; i < NB_TILE_ALONG_X; i++){
		for (int j = 0; j < NB_TILE_ALONG_Y; j++){
			sprite.setTextureRect(sf::IntRect(i * TILE_SIZE_ALONG_X, j * TILE_SIZE_ALONG_Y, TILE_SIZE_ALONG_X, TILE_SIZE_ALONG_Y));
			Tile tile{sprite, id};
			tilesTable.push_back(tile);
			id++;
		}
	}

}

void Tileset::testDisplay(sf::RenderWindow &window){

	for (auto t: tilesTable){
		if (t.getId() == 121){
			window.draw(t.getSprite());
		}
	}
}
