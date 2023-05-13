#include "Ninja.hpp"
#include <cmath>
#include <iostream>

using namespace std;
using namespace ariel;

Ninja::Ninja(const string name, const Point& location, int hitPoints, int speed):
  Character(name, location, hitPoints), speed(0){}

void Ninja::move(Character* enemy){}

void Ninja::slash(Character* enemy){}

double Ninja::getSpeed() { return speed; }
