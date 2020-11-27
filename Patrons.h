#ifndef PATRONS_H
#define PATRONS_H


//#include <string>
#include <vector>
#include "Patron.h"
using namespace std;

class Patrons{
    public:
        Patrons();
        
        void Add(Patron n);
        void Edit();
        void Delete();
        void Search();
        void PrintPatrons();
        void Print();

    private:
	vector<Patron *> P;

};
#endif
