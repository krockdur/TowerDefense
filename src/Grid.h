/*
 * Grid.h
 *
 *  Created on: 31 déc. 2018
 *      Author: krock
 */

#ifndef GRID_H_
#define GRID_H_

#include <SFML/Graphics.hpp>
#include <iostream>

class Grid {
public:
	Grid();
	void display(sf::RenderWindow &window);

private:
	sf::Texture texture;
	sf::Sprite sprite;

};

#endif /* GRID_H_ */
