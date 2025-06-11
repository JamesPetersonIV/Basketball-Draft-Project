//Create a separate third class of your choice.  
//This class will have at least one data member.  
//You will now add a const data member of this new class within your derived class (essentially doing composition). 
// Make any changes necessary to the derived class’s constructor in order to handle this new data member object.
//Use the const data member in at least one of your functions in the derived class.
#ifndef TEAMS_H
#define TEAMS_H
#include <iostream>
#include <string>
#include "GOATPlayers.h"

using namespace std;

class Teams: public GOATPlayers
{
    private:
    
       
    
        //read team names
        std::string T;
    
        //names 
        
        //number of players
        
    public:
        
        Teams();
        Teams(std::string t);
       
        void setTeamName(std::string);
        std::string getTeamName() const;
        
    
        void print() const override;

};
#endif
