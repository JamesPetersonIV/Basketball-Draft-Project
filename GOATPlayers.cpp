#include <iostream>
#include <string>
#include "GOATPlayers.h"
#include "Owners.h"
#include "Teams.h"

using namespace std;

std::string GOATPlayers::centers[10]={"Kareem Abdul-Jabbar", "Shaquille O'Neal", "Wilt Chamberlain", "Bill Russell", "Hakeem Olajuwon", "David Robinson", "Moses Malone", "Patrick Ewing", "Wes Unseld", "Willis Reed"};
std::string GOATPlayers::powerFowards[10]={"Tim Duncan", "Karl Malone", "Dirk Nowitzki", "Charles Barkley", "Kevin Garnett", "Kevin McHale", "Bob Pettit", "Elvin Hayes", "Pau Gasol", "Dennis Rodman"};
std::string GOATPlayers::smallFowards[10]={"Lebron James", "Larry Bird", "Kevin Durant", "Julius Erving", "Elgin Baylor", "Scottie Pippen", "John Havlicek", "Adrian Dantley", "Paul Pierce", "Kawhi Leonard"};
std::string GOATPlayers::shootingGaurds[10]={"Kobe Bryant", "Michael Jordan", "Dwayne Wade", "James Harden", "Clyde Drexler", "Manu Ginobili", "Reggie Miller", "Ray Allen", "George Gervin", "Tracy McGrady"};
std::string GOATPlayers::pointGuards[10]={"Magic Johnson", "Stephen Curry", "Oscar Robertson", "Jerry West", "Chris Paul", "John Stockton", "Jason Kidd", "Steve Nash", "Russell Westbrook", "Isiah Thomas"};


GOATPlayers::GOATPlayers()
{
       c = 0;
       pf = 0;
       sf = 0;
       sg = 0;
       pg = 0;
       p = new int(0);
       playstyle = " ";
       coach = " ";
}

GOATPlayers::GOATPlayers(const GOATPlayers& s)
{
         c = s.c;
         pf = s.pf;
         sf = s.sf;
         sg = s.sg;
         pg = s.pg;
         playstyle = s.playstyle;
         coach = s.coach;
         p = new int(*s.p);
}

GOATPlayers::GOATPlayers(int c, int pf, int sf, int sg, int pg, string coach, string ps, string ownerName, int P)
    : Owners(ownerName), c(c), pf(pf), sf(sf), sg(sg), pg(pg), coach(coach), playstyle(ps), p(new int(P)) {}


GOATPlayers::~GOATPlayers()
{
    delete p;
}


void GOATPlayers::setCenters(int val)
{
    c = val;
}


void GOATPlayers::setPowerFowards(int val)
{
    pf = val;
}


void GOATPlayers::setSmallFowards(int val)
{
    sf = val;
}


void GOATPlayers::setShootingGaurds(int val)
{
    sg = val;
}


void GOATPlayers::setPointGaurds(int val)
{
    pg = val;
}



void GOATPlayers::setCoach(std::string str)
{
    coach = str;
}


void GOATPlayers::setPlayStyle(std::string str)
{
    playstyle = str;
}


int GOATPlayers::getCenters() const
{
    return c;
}


int GOATPlayers::getPowerFowards() const
{
    return pf;
}


int GOATPlayers::getSmallForwards() const
{
    return sf;
}


int GOATPlayers::getShootingGaurds() const
{
    return sg;
}


int GOATPlayers::getPointGuards() const
{
    return pg;
}


std::string GOATPlayers::getCoach() const
{
    return coach;
}


std::string GOATPlayers::getPlaystyle() const
{
    return playstyle;
}

void GOATPlayers::print() const {
    Owners::print();
    cout << "Coach: " << coach << "\nPlaystyle: " << playstyle << endl;
    cout << "Starting Five:" << endl;
    cout << "  C:  " << centers[c] << endl;
    cout << "  PF: " << powerFowards[pf] << endl;
    cout << "  SF: " << smallFowards[sf] << endl;
    cout << "  SG: " << shootingGaurds[sg] << endl;
    cout << "  PG: " << pointGuards[pg] << endl;
}

