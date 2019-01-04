/*
 * Level.cpp
 *
 *  Created on: 1 janv. 2019
 *      Author: krock
 */

#include "Level.h"
#include <iostream>
Level::Level(int number) {
	if (number == 0){
		loadMap0();
	}
}

void Level::displayLvl(sf::RenderWindow &window, Tileset &tileset){

	int i = 0;

	for (auto c: caseTable){
		for (auto t: tileset.tilesTable){
			if (t.getId() == c.getId()){
				//t.getSprite().setPosition(c.getPosition());
				sf::Sprite sp = t.getSprite();
				sp.setPosition(c.getPosition());
				window.draw(sp);
				i ++;
			}
		}
	}
}

void Level::loadMap0(){



	auto tabNumTile = std::array<int, 225>{
		0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,
		15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,
		30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,
		45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,
		60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,
		75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,
		90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,
		105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,
		120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,
		135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,
		150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,
		165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,
		180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,
		195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,
		210,211,212,213,214,215,216,217,218,219,220,221,222,223,224

	};

	int k = 0;
	for (int i = 0; i < NB_CASE_ALONG_X; i++){
		for (int j = 0; j < NB_CASE_ALONG_Y; j++){
			caseTable.push_back( Case{tabNumTile[k], sf::Vector2f{static_cast<float>(i) * 64.f, static_cast<float>(j) * 64.f}} );
			k++;

		}
	}
}








