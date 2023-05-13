#ifndef YOUNG_NINJA_HPP
#define YOUNG_NINJA_HPP

#include "Ninja.hpp"
#include <iostream>

namespace ariel {
    class YoungNinja : public Ninja{
        public:
           YoungNinja(const string, const Point&); //Young ninja is also a character
           ~YoungNinja();
        
    };
}

#endif
