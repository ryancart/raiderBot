/*
 * map.cpp
 *
 *      Author: [TODO]
 */

#include "map.h"
#include "string"
#include "iostream"

Map::Map() {
    new char[10][20];
}

void Map::load() {
    std::string input_line = "initialize";

    std::cin << input_line;

    while (cin){
        for(int a = 0; a < 22; ++a){
            for(int b = 0; b < 12; ++b){
                std::string mapIn = getline(cin, input_line);
                this->write(mapIn);
                for(int i = 0; i < input_line.length(); ++i){
                    if(!mapIn.at(0) == '+'){
                        if(!mapIn.at(i) == '|'){
                            this->[a - 1][b - 1] = mapIn.at(i);
                        }
                    }
                }
            }
        }
    }
}

void Map::write(std::string s) {} {
    bool ending = false;
    for(int i = 0; i < s.length(); ++i){
        if(s.at(i) == '|'){
            ending = true;
        }
        cout << s.at(i);
        if(ending){
            cout << endl;
        }
    }
}