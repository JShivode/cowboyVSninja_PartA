#ifndef TRAINED_NINJA_HPP
#define TRAINED_NINJA_HPP

#include "Ninja.hpp"
#include <iostream>
using namespace std;

namespace ariel {
    class TrainedNinja : public Ninja{
        public:
           TrainedNinja(const string, const Point&); //Trained ninja is also a character
           ~TrainedNinja();
       
    };
}

#endif
