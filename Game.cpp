#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <iterator>

using namespace std;

#include "Game.hpp"
namespace ariel{

    Game::Game(){

        this->outcome = 0;
    }
    Game::Game(Team other_in, Team other_out){
        this->in = other_in;
        this->out = other_out;
    }
    Team winner(){

    }

}