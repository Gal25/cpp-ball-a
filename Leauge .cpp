#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <iterator>

using namespace std;

#include "Leauge.hpp"

namespace ariel{
    Leauge::Leauge(){
        for(int i =0; i< 20; i++){
            Team team;
            team.name = i;
            this.the_leauge.push_back(team);
        }

    }
    Leauge::Leauge(vector<Team> other_leauge){
        this.the_leauge = other_leauge;
    }          

}