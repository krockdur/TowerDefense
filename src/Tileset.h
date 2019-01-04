/*
 * Tileset.h
 *
 *  Created on: 31 déc. 2018
 *      Author: krock
 *
 *      Job : 	Load the tiles sheet png texture
 *      		create one sprite per square (size 64*64)
 *     			create a vector of tile
 */

#ifndef TILESET_H_
#define TILESET_H_

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "Tile.h"

class Tileset {
public:
	Tileset();
	Tileset(int number);

	void testDisplay(sf::RenderWindow &window);

	std::vector<Tile> tilesTable;

private:
	sf::Texture texture;

	const int NB_TILE_ALONG_X = 23;
	const int NB_TILE_ALONG_Y = 13;
	const int TILE_SIZE_ALONG_X = 64;
	const int TILE_SIZE_ALONG_Y = 64;

	void loadSprite();


};

#endif /* TILESET_H_ */
