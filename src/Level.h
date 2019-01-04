/*
 * Level.h
 *
 *  Created on: 1 janv. 2019
 *      Author: krock
 */

#ifndef LEVEL_H_
#define LEVEL_H_

#include <vector>
#include "Case.h"
#include <array>
#include <SFML/Graphics.hpp>
#include "Tileset.h"

class Level {
public:
	Level(int number);
	void displayLvl(sf::RenderWindow &window, Tileset &tileset);


private:

	std::vector<Case> caseTable;
	void loadMap0();

	const int NB_CASE_ALONG_X = 23;
	const int NB_CASE_ALONG_Y = 13;
};

#endif /* LEVEL_H_ */
