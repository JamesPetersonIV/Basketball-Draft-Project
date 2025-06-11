#include <iostream>
#include <vector>
#include <string>
#include "GOATPlayers.h"
#include "Owners.h"
#include "Teams.h"
#include <memory>


using namespace std;

int main()
{
    //Owners on;
    //GOATPlayers team1;
    //Teams T1;    

     //team1.print();
    //T1.print();

    int numUsers;
    cout << "Enter number of users: ";
    cin >> numUsers;
    cin.ignore();

    vector<unique_ptr<Teams>> allTeams;

    for (int i = 0; i < numUsers; ++i) {
        auto team = make_unique<Teams>();
        string input;
        int index;

        cout << "\nEnter owner name for team " << (i + 1) << ": ";
        getline(cin, input);
        team->setO(input);

        cout << "Enter team name: ";
        getline(cin, input);
        team->setTeamName(input);

        cout << "Enter coach name: ";
        getline(cin, input);
        team->setCoach(input);

        cout << "Enter playstyle: ";
        getline(cin, input);
        team->setPlayStyle(input);

        cout << "Select Center [0-9]: ";
        cin >> index;
        team->setCenters(index);

        cout << "Select Power Forward [0-9]: ";
        cin >> index;
        team->setPowerFowards(index);

        cout << "Select Small Forward [0-9]: ";
        cin >> index;
        team->setSmallFowards(index);

        cout << "Select Shooting Guard [0-9]: ";
        cin >> index;
        team->setShootingGaurds(index);

        cout << "Select Point Guard [0-9]: ";
        cin >> index;
        team->setPointGaurds(index);
        cin.ignore();

        allTeams.push_back(move(team));
    }

    cout << "\n===== All Teams =====" << endl;
    for (const auto& team : allTeams) {
        team->print();
        cout << endl;
    }

    return 0;
}
