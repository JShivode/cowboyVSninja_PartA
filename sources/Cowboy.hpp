#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"
#include <iostream>
/*Cowboy has 6 bullets and 11 hit points*/

namespace ariel {
    class Cowboy : public Character{

        private:
           int numofBalls;

        public:

           //Cowboy();
           Cowboy(string,Point&); //cowboy is also a character
           ~Cowboy();

           int getNumofBalls() const{return numofBalls;}

           //shoot gets a pointer to the enemy. If the cowboy is not dead and he has bullets left, 
           //the cowboy shoots the enemy, subtracts 01 hit points from the enemy - and loses 1 bullet.
           //Otherwise, no damage will be done to the enemy. 
           void shoot(Character* enemy);

           //indicates whether there are any bullets left in this cowboy's gun.
           bool hasboolets();

           //loads the gun with six new bullets.
           void reload();
           string print();





     
    };
}

#endif
