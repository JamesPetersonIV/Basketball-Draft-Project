#include <iostream>
#include <fstream>
#include <iomanip>
#include "Teams.h"

using namespace std; 

Teams::Teams()
{
   T = " ";
}

Teams::Teams(std::string t)
{
    T = t;
    GOATPlayers();
}

void Teams::setTeamName(std::string t)
{
    T = t;
    GOATPlayers();
}


string Teams::getTeamName() const
{
    return T;
}


void Teams::print() const {
    GOATPlayers::print();
    cout << "Players Pick a Team\n" << T << endl;
}
