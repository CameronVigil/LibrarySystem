#include <cstdlib>
#include <string>
#include "LibraryItem.h"

using namespace std;

LibraryItem::LibraryItem(){
	this->ID = 0;
	this->Cost = 0.0;
	this->Status = "none";
	this->Loan_Period = 0;
}
LibraryItem::LibraryItem(int ID,float Cost,string Status,int Loan_Period){
    this->ID = ID;
	this->Cost = Cost;
	this->Status = Status;
	this->Loan_Period = Loan_Period;
}
        
void LibraryItem::SetID(int ID){
	this->ID = ID;
}
int LibraryItem::GetID() const{
	return ID;
}

void LibraryItem::SetCost(float Cost){
	this->Cost = Cost;
}
float LibraryItem::GetCost() const{
	return Cost;
}

void LibraryItem::SetStatus(string Status){
	this->Status = Status;
}
string LibraryItem::GetStatus() const{
	return Status;
}
		
void LibraryItem::SetLoan_Period(int Loan_Period){
	this->Loan_Period = Loan_Period;
}
int LibraryItem::GetLoan_Period() const{
	return Loan_Period;
}

//




string LibraryItem::GetTitle() const {
	//return Title;
}







