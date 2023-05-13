#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Point.hpp"
#include <iostream>
#include <sstream>

namespace ariel{ 

    //This class presents a character
    class Character{
        protected:
           Point location;
           string name;
           int hitPoints;

        public:

            //Character();
            Character(const string , const Point& , int);
            ~Character();

           // void setHitPoints(int point) const;

            //is the character alive (it has more than zero hit points)
            bool isAlive();

            
            //receives a pointer to another character and returns the distance between the characters
            double distance(Character*);  

            //Subtracts the appropriate amount of hit points from the character. returns nothing
            void hit(int);


           // Getters:
            
            //returns the name of the character.
            string getName() const;

            //Returns the position of the character
            Point getLocation() const;

            //Prints the name of the character, the number of its hit points, and the point where the character is.
            virtual string print();



    };
}
#endif