/*
 * Tile.h
 *
 *  Created on: 1 janv. 2019
 *      Author: krock
 */

#ifndef TILE_H_
#define TILE_H_

#include <SFML/Graphics.hpp>


class Tile {
public:
	Tile(sf::Sprite &sprite, int id);
	int getId();
	sf::Sprite getSprite();

private:

	sf::Sprite tileSprite;
	int tileId;

};

#endif /* TILE_H_ */
