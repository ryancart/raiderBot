/*
 * map.cpp
 *
 *      Author: [TODO]
 */

#include "map.h"
#include "string"
#include "iostream"

Map::Map() {

}

void Map::load() {
    std::string input_line = " ";

    //std::cin;

    while (std::cin){
        getline(std::cin, input_line);
        this->write(input_line);

        for(int a = 0; a < 22; ++a){
            for(int b = 0; b < 12; ++b){
                for(int i = 0; i < input_line.length(); ++i){
                    if(input_line.at(0) != '+'){
                        if(input_line.at(i) != '|'){
                            this->[a - 1][b - 1] = input_line.at(i);
                        }
                    }
                }
            }
        }
    }
}

void Map::write(std::string s) {
    bool ending = false;
    for(int i = 0; i < s.length(); ++i){
        if(i > 0 && s.at(i) == '|'){
            ending = true;
        }
        std::cout << s.at(i);
        if(ending){
            std::cout << std::endl;
        }
    }
}