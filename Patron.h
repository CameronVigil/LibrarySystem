#ifndef PATRON_H
#define PATRON_H


#include <string>

using namespace std;

class Patron{
    public:
        Patron(string Name, int ID, float Balance, int Books_Out);
       
		void SetName(string Name);
		string GetName() const;

		void SetID(int ID);
		int GetID() const;

		void SetBalance(float Balance);
		float GetBalance() const;

		void SetBooks_Out(int Books_Out);
		int GetBooks_Out() const;

    private:
        string Name;
        int ID;
        int Books_Out;
        float Balance;
};
#endif
