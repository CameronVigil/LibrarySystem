#ifndef LOAN_H
#define LOAN_H


#include <string>

using namespace std;

class Loan{
    public:
        Loan(int Book_ID, int Patron_ID);
        
		void SetBook_ID(int Book_ID);
		int GetBook_ID();
		void SetPatron_ID(int Patron_ID);
		int GetPatron_ID();
		
    private:
        int Loan_ID;
        int Book_ID;
        int Patron_ID;
        //due date and time
        float Cost;
        string Status;
};
#endif
