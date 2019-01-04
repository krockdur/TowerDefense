/*
 * Case.cpp
 *
 *  Created on: 1 janv. 2019
 *      Author: krock
 */

#include "Case.h"

Case::Case(int tileId, sf::Vector2f tilePosition) {
	id = tileId;
	position = tilePosition;
}

int Case::getId(){
	return id;
}

sf::Vector2f Case::getPosition(){
	return position;
}
