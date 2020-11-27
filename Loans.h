#ifndef LOANS_H
#define LOANS_H

#include <vector>
#include <string>

using namespace std;

class Loans{
    public:
        Loans();
        
        void CheckOut();
        void CheckIn();
        void ListOverdue();
        void ListBooks();
        void UpdateStatus();
        void ReCheck();
        void EditLoan();
        void ReportLost();


    private:
	vector<Loans *> L;


};
#endif
