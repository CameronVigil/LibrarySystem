#include <cstdlib>
#include <string>
#include "Loan.h"
using namespace std;

Loan::Loan(int Book_ID, int Patron_ID){
	this->Book_ID = Book_ID;
	this->Patron_ID = Patron_ID;
	
}

void Loan::SetBook_ID(int Book_ID) {
	this->Book_ID = Book_ID;
}
int Loan::GetBook_ID(){
	return Book_ID;
}
void Loan::SetPatron_ID(int Patron_ID) {
	this->Patron_ID = Patron_ID;
}
int Loan::GetPatron_ID(){
	return Patron_ID;
}
