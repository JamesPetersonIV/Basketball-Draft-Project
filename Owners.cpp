#include <iostream>
#include <string>
#include "Owners.h"

using namespace std;

        Owners::Owners()
        {
          O = " ";
        }

        Owners::Owners(std::string o)
        {
          O = o;
        }

        void Owners::setO(std::string o)
        {
          O = o;
        }

        std::string Owners::getO() const
        {
          return O;
        }

        void Owners::print() const
        {
          cout << "Owner: " << O << endl;
        }
