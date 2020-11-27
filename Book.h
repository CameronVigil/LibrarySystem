#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "LibraryItem.h"
using namespace std;

class Book : public LibraryItem{
    public:
        Book(string Author, string Title, int ISBN_Num, string Category);
        
		void SetAuthor(string Author);
		string GetAuthor() const;

		void SetTitle(string Title);
		string GetTitle() const override;

		void SetISBN_Num(int ISBN_Num);
		int GetISBN_Num() const;
		
		void SetCategory(string Category);
		string GetCategory() const;

		
    private:
        string Author;
        string Title;
        int ISBN_Num;
        string Category;
		
};
#endif
