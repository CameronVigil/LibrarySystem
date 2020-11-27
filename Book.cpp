#include <cstdlib>
#include <string>
#include "Book.h"

using namespace std;


Book::Book(string Author, string Title, int ISBN_Num, string Category){
	this->Author = Author;
	this->Title = Title;
	this->ISBN_Num = ISBN_Num;
	this->Category = Category;
}

void Book::SetAuthor(string Author) {
	this->Author = Author;
}
string Book::GetAuthor() const{
	return Author;
}
void Book::SetTitle(string Title) {
	this->Title = Title;
}
string Book::GetTitle() const {
	return Title;
}
void Book::SetISBN_Num(int ISBN_Num) {
	this->ISBN_Num = ISBN_Num;
}
int Book::GetISBN_Num() const{
	return ISBN_Num;
}
void Book::SetCategory(string Category){
	this->Category = Category;
}
string Book::GetCategory() const{
	return Category;
}

