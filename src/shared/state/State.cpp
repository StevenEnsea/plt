#include <fstream>
#include <iostream>
#include <sstream>
#include <memory>
#include <vector>
#include <algorithm>
#include <string.h>
#include <cstdlib>
#include "State.h"

using namespace state;
using namespace std;
//std::vector<std::vector<std::pair<FieldTypeId, std::pair<FieldStatusId,int>>>> grid;

std::vector<std::vector<std::pair<FieldTypeId, std::pair<FieldStatusId,int>>>>& State::getGrid(){
	std::vector<std::vector<std::pair<FieldTypeId, std::pair<FieldStatusId,int>>>>& refGrid = grid;
	return refGrid;
}

std::vector<Player*> State::getPlayers(){
	return players;
}

int State::getRound(){
	return round;
}

void State::setRound(int newRound){
	round = newRound;
}

void State::initCursor(){
	cursor = new Cursor();
}

Cursor* State::getCursor(){
	return cursor;
}

void State::initPlayers(int nbPlayers){
	for (int i=0;i<nbPlayers;i++){
		players.push_back( new Player());
		players[i]->setPlayerId(i+1);
		players[i]->setX(rand()%getGrid()[0].size());
		players[i]->setY(rand()%getGrid().size());
		players[i]->setDirection(static_cast<DirectionId>(rand()%4));
		//players[i]->setClassId(static_cast<ClassId>(rand()%4));
	}

}

bool State::initGrid(std::string map_txt){
	std::ifstream fichier(map_txt, ios::in);
	std::string strnombre, ligne;
	int nombre;
	std::vector<std::pair<FieldTypeId, std::pair<FieldStatusId,int>>> cases;
	std::pair<FieldTypeId, std::pair<FieldStatusId,int>> stat;
	
	// Lecture Fichier
    if (fichier){
    	while (getline(fichier, ligne)){
			for(size_t i = 0; i < ligne.size();i++){
				if(isdigit(ligne.at(i)) != 0){
					strnombre+=ligne.at(i);
				}
				else{
					stringstream ssnombre(strnombre);
					ssnombre >> nombre;
					stat.first = static_cast<FieldTypeId>(nombre);
					cases.push_back(stat);
					i++;
					strnombre = "";
				}
			}
			grid.push_back(cases);
			cases = {};
			strnombre = "";
		}
		fichier.close();
		return 1;
    }
    else {return 0;}
}
