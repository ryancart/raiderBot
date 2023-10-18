/*
 * map.cpp
 *
 *      Author: [TODO]
 */

#include "map.h"

Map::Map() {
    new char[10][20];
}

void Map::load() {
    String input_line;
    cin << input_line;

    while (cin){
        for(int a = 0; a < 20; ++a){
            for(int b = 0; b < 10; ++b){
                getline(cin, input_line);
                for(int i = 0; i < input_line.length(); ++i){
                    this->write(a, b, i);
                }
            }
        }

    }
    getline(cin, input_line);

    for loop (0 to input_line.length()

//    for(int w = 0, w < 10, ++w){
//        for(int h = 0, h < 20, ++h){
//
//        }
//    }
}

void Map::write(int a; int b, int i) {
    

}