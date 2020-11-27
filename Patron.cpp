#include <cstdlib>
#include <string>
#include "Patron.h"
using namespace std;

Patron::Patron(string Name, int ID, float Balance, int Books_Out){
	this->Name = Name;
	this->ID = ID;
	this->Balance = Balance;
	this->Books_Out = Books_Out;
}

void Patron::SetName(string Name){
	this->Name = Name;
}

string Patron::GetName() const{
	return Name;
}

void Patron::SetID(int ID){
	this->ID = ID;
}

int Patron::GetID() const{
	return ID;
}

void Patron::SetBalance(float Balance){
	this->Balance = Balance;
}

float Patron::GetBalance() const{
	return Balance;
}

void Patron::SetBooks_Out(int Books_Out){
	this->Books_Out = Books_Out;
}

int Patron::GetBooks_Out() const{
	return Books_Out;
}