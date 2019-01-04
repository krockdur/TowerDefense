/*
 * Case.h
 *
 *  Created on: 1 janv. 2019
 *      Author: krock
 */

#ifndef CASE_H_
#define CASE_H_


#include "Tile.h"
#include <SFML/Graphics.hpp>

class Case {
public:
	Case(int tileId, sf::Vector2f position);

	int getId();
	sf::Vector2f getPosition();

private:

	int id;
	sf::Vector2f position;

};

#endif /* CASE_H_ */
