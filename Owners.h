//Build an abstract base class of your choice that has at least one data member.
#ifndef OWNERS_H
#define OWNERS_H
#include <iostream>
#include <string>

using namespace std;


class Owners
{
    protected:
        //owners of teams
        std::string O;
     
    public:
        //player option 1-7
        Owners();
        Owners(std::string o);
        void setO(std::string o);
        std::string getO() const;
        
        //void 
        virtual void print() const;
    
};
#endif
