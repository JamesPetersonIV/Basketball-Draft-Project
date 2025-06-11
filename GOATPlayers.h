//Build another class, using the characteristics below, that inherits from the above mentioned class.
//A. Uses #ifndef and #endif to prevent multiple inclusions
//B. Has a minimum of 3 private data members, all different types
//C. Has a minimum of two constructors. One of which must provide default arguments.
//D. Overloads at least one function from its parent class (other than the pure virtual function)
//E. Separates class declaration from implementation
//F. Has a set and get member function for each data member
//G. Overload the following operators: <<, >>, = and ==. You should not use keyword friend when you overload the == operator.
//H. Ensure that all your get functions are const
//I. Has a pointer member variable other than those above
//J. Has a copy constructor and destructor
//K. Has a template function.
//L. Use the this pointer in at least two places in your code

#ifndef GOATPLAYERS_H
#define GOATPLAYERS_H
#include <iostream>
#include <string>
#include <cassert>
#include "Owners.h"


using namespace std;



class GOATPlayers:public Owners
{
    private:
    
        int c;
        int pf;
        int sf;
        int sg;
        int pg;
        std::string playstyle;
        std::string coach;
        int* p;

    public:
        
        static std::string centers[10];
        static std::string powerFowards[10];
        static std::string smallFowards[10];
        static std::string shootingGaurds[10];
        static std::string pointGuards[10];
        
        GOATPlayers();
        
        GOATPlayers( const GOATPlayers& s); //copy constructor
        
        GOATPlayers(int c, int pf, int sf, int sg, int pg, std::string coach, std::string ps, std::string OwnerName, int P);
        
        ~GOATPlayers(); //destructor
        
        void setCenters(int);

        void setPowerFowards(int);

        void setSmallFowards(int);

        void setShootingGaurds(int);

        void setPointGaurds(int);
        
        void setCoach(std::string);
        
        void setPlayStyle(std::string);

        int getCenters() const;

        int getPowerFowards() const;

        int getSmallForwards() const;

        int getShootingGaurds() const;

        int getPointGuards() const;
        
        std::string getCoach() const;
        
        std::string getPlaystyle() const;
        
        virtual void print() const override;

};
#endif

//owner name
//team name
//play style
//players
//c: player,player
//pf: player,player
//sf: player,player
//sg: player,player
//pg: player,player
