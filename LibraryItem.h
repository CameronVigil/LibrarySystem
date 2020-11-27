#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>
using namespace std;

class LibraryItem{
    public:
		LibraryItem();
        LibraryItem(int ID,float Cost,string Status,int Loan_Period);
        
		void SetID(int ID);
		int GetID() const;

		void SetCost(float Cost);
		float GetCost() const;

		void SetStatus(string Status);
		string GetStatus() const;
		
		void SetLoan_Period(int Loan_Period);
		int GetLoan_Period() const;

		void SetAuthor(string Author);
		string GetAuthor() const;

		void SetTitle(string Title);
		virtual string GetTitle() const;

		void SetISBN_Num(int ISBN_Num);
		int GetISBN_Num() const;
		
		void SetCategory(string Category);
		string GetCategory() const;




    private:
        int ID;
		float Cost;
		string Status;
		int Loan_Period;
};
#endif
