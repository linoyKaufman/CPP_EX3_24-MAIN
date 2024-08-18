#include "player.hpp"
#include <iostream>
#include <cstdlib>
#include <random>
#include <stdexcept>



player::player(const std::string& name): name(name), Points(0), turn(false), board(nullptr) {
    resources[WOOD] = 0;
    resources[BRICK] = 0;
    resources[SHEEP] = 0;
    resources[WHEAT] = 0;
    resources[CLAY] = 0;
}

void player::addResource(Resource res, int amount) {
    
    resources[res] = resources[res] + amount; 
}
void player::deletResource(Resource res, int amount) {
    if(resources[res] >= amount){
    resources[res] = resources[res] - amount; }
    else{
        throw std::invalid_argument("amount to delet is bigger then what you have");
    }
}

