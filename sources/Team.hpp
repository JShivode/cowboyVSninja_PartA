#ifndef TEAM_HPP
#define TEAM_HPP

#include "Character.hpp"
#include "Point.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include <iostream>
#include <vector>
#include <memory>

namespace ariel {
    class Team{

      private:
        // Vector containing pointers to all characters in the Team
         std::vector<Character*> team_members;

        
        // Pointer to the leader of the Team
        // Character* leader;

       


    public:
         // Constructor - takes a pointer to the leader of the group
         Team(Character* leader);

        // Destructor - frees the memory allocated to all members of the group
         ~Team();

        //takes a pointer to a cowboy or ninja, and adds it to the team.
        void add(Character*);

        // Attacking the enemy group
        void attack(Team* enemyTeam);

        // Returns the number of members of the group left alive
        int stillAlive() const;

        // Prints the details of all fighters in the group
        void print() const;

       
    };
}

#endif
