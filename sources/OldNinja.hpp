#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP

#include "Ninja.hpp"
#include <iostream>

namespace ariel {
    class OldNinja : public Ninja{
        
        public:
           OldNinja(string, Point&); //Old ninja is also a character
           ~OldNinja();
        
    };
}

#endif
