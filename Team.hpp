#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <vector>
using namespace std;


namespace ariel{
    class Team {
        private:
            string name;
            double talent;
            int points;
        public:
            Team();
            Team(string other_name, double other_talent, int other_points);
            
    };
}