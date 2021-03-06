#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <vector>
using namespace std;

#include "Team.hpp"

namespace ariel{
    class Game {
      private:
        Team in;
        Team out;
        int outcome;

        public:
            Game();
            Game(Team other_in, Team other_out);
            Team winner();
            
    };
}