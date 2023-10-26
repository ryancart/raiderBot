/*
 * map.cpp
 *
 *      Author: [TODO]
 */

#include "map.h"
#include "string"
#include "iostream"

using namespace std;

Map::Map() {
    for (int h = 0; h < 10; ++h) {
        for (int w = 0; w < 20; ++w) {
            this->cells[w][h] = nullptr;
        }
    }
}


void Map::load() {
    string input_line;
    getline(std::cin, input_line);
    write(input_line);

    for (int h = 1; h < 11; ++h) {
        getline(cin, input_line);
        write(input_line);
        for (int w = 1; w < 21; ++w) {
            this->cells[w][h] = new MapCell(w, h, input_line.at(w));
        }
    }
    getline(std::cin, input_line);
    write(input_line);
}


void Map::write(std::string s) {
    bool ending = false;
    for (int i = 0; i < s.length(); ++i) {
        if (i > 0 && (s.at(i) == '|' || s.at(i) == '+')) {
            ending = true;
        }
        std::cout << s.at(i);
        if (ending) {
            std::cout << std::endl;
        }
    }
}
