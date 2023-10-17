/*
 * cell.cpp
 *
 *      Author: [TODO]
 */

#include "cell.h"

MapCell::MapCell(int x, int y, char type) : xLocation(), yLocation(), token() {};

bool MapCell::hasPit() {
    return this->token == '#';
}

bool MapCell::hasGold() {
    return this->token == '*';
}

void MapCell::removeGold() {
    this->token = ' ';
}

bool MapCell::occupied() {
    return this->token == ' ';
}

char MapCell::display() {
    return this->token;
}

void MapCell::enter() {
    // do something about a robot being here
}

void MapCell::vacate() {
    // do something about the robot kicking rocks
}