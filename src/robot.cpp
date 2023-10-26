/*
 * robot.cpp
 *
 *      Author: [TODO]
 */

#include "robot.h"


Robot::Robot(Map *map, int startx, int starty) {
    this->mapPointer = ;
    this->startx = startx;
    this-> starty = starty;
}

// display robot status in the form of "Robot at 6, 7 (1 gold)" to cout
void Robot::displayStatus() {};
// move robot in specified direction (e/w/s/n), returning true
//   if was able to move in that direction
// Warning: this method can get long - be sure to write private messages
//   to break it up
bool Robot::move(char direction){ return true;};
// move robot in a series of directions, returning true if was
//   able to complete the list of directions
bool Robot::move(std::string commands) { return true;};