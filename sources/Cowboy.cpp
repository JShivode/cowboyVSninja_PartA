#include "Cowboy.hpp"
#include "Ninja.hpp"
#include <cmath>
#include <iostream>

using namespace std;
using namespace ariel;

//Cowboy::Cowboy(){}

Cowboy::Cowboy(string name, Point& location):
  Character(name, location, 110), numofBalls(6){} 

Cowboy::~Cowboy(){}

//int Cowboy::getNumofBalls(){ return 0;}

void Cowboy::shoot(Character* enemy){cout<< getName();}

bool Cowboy::hasboolets(){return false;}

void Cowboy::reload(){}

string Cowboy::print(){return "cowboy";}




