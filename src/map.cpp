/*
 * map.cpp
 *
 *      Author: [TODO]
 */

#include "map.h"
#include "string"
#include "iostream"

Map::Map(){
    MapCell mapCell;
}

void Map::load() {
    std::string input_line;
    getline(std::cin, input_line);
    write(input_line);

    while (std::cin){
        getline(std::cin, input_line);
        write(input_line);

        for(int h = 1; h < 11; ++h){
            for(int w = 1; w < 21; ++w){
                this->cells[w][h] = new mapCell(w, h, input_line.at(w));

            }
        }
    }
}


void Map::write(std::string s) {
    bool ending = false;
    for(int i = 0; i < s.length(); ++i){
        if(i > 0 && (s.at(i) == '|' || s.at(i) == '+')){
            ending = true;
        }
        std::cout << s.at(i);
        if(ending){
            std::cout << std::endl;
        }
    }
}