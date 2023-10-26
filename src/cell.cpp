/*
 * cell.cpp
 *
 *      Author: [TODO]
 */

#include "cell.h"

MapCell::MapCell(int x, int y, char type) {
    this->xLocation = x;
    this->yLocation = y;
    this->token = type;
};

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
    this->hasRobot = true;
}

void MapCell::vacate() {
    this->hasRobot = false;
}