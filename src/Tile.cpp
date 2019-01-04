/*
 * Tile.cpp
 *
 *  Created on: 1 janv. 2019
 *      Author: krock
 */

#include "Tile.h"

/**
 * id => int : ckeck tilesheet.ods to pick the correct id of the tile
 */

Tile::Tile(sf::Sprite &sprite, int id) {

	tileSprite = sprite;
	tileId = id;

}

sf::Sprite Tile::getSprite(){
	return tileSprite;
}

int Tile::getId(){
	return tileId;
}
