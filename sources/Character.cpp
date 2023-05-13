#include "Character.hpp"
#include <cmath>
#include <iostream>

using namespace std;
using namespace ariel;

//Character::Character(){}

Character::Character(const string name, const Point& position, int hitPoints):
name(name), location(position), hitPoints(hitPoints) {};


Character::~Character(){}
/*
void Character::setHitPoints(int point) {
     this->hitPoints = point;
}
*/
bool Character::isAlive(){return true;}
          
double Character::distance(Character* other_character){return 0;}  

void Character::hit(int hits){}

string Character::getName() const{
    return name;
}

Point Character::getLocation() const{
    return location;
}

string Character::print(){
     //std::stringstream ss;
    //ss << getName() << ": " << hitPoints << endl;
    //return ss.str();
     //std::cout << "(" << Character::getName() << std::endl;
     return "Character "+ Character::getName() ;
}

///////////////

