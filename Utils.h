#ifndef UTI_H
#define UTI_H
#include <iostream>
#include <ctime>


class Utils {
    std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        
        return std::tuple<int, int>;
    };
    double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        int x1, y1;
        std::tie(x1,y1)= pos1.getPos();
        int x2, y2;
        std::tie(x2,y2)= pos2.getPos();
        double distance = sqrt((x2-x1)^2+(y2-y1)^2);
        return distance;
    };
}
#endif