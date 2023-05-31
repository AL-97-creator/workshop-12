#ifndef GE_H
#define GE_H
#include <iostream>
#include <ctime>


class GameEntity {
    std::tuple<int, int> position;
    char type;
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos(){
        return std::tuple(x,y);
    };
    char getType(){
        return type;
    };
}

#endif