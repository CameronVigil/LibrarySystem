//Cameron Vigil
//Homework 3
//CSCE 1040

#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "LibraryItem.h"
#include "Book.h"
#include "CD.h"
#include "DVD.h"
#include "Loan.h"
#include "Loans.h"
#include "Patron.h"
#include "Patrons.h"

int main(){
	vector<LibraryItem *> I;
	vector<Patron *> P;
	vector<Loans *> L;
	
	Book* book = nullptr;
	CD* cd = nullptr;
	DVD* dvd = nullptr;
	Patron* patron = nullptr;
	
	
	
	//Variables
	string Artist;
	string Title;
	int NumTracks;
	string releaseDate;
	string Genre;
	string Author;
	int ISBN_Num;
	string Category;
	string Runtime;
	string Studio;
	string Name;
	int ID;
	int Books_Out;
	float Balance;
    int input = 0;

	cout << "LIBRARY SYSTEM" << endl;

	while(input != 1){
		cout << endl << "MAIN MENU" << endl;
		cout << " [1] Exit" << endl;
		cout << " [2] Patron" << endl;
		cout << " [3] Loan"<< endl;
		cout << " [4] Library Item" << endl;
		cin >> input;
		cin.ignore();
		if(input == 1){
			break;
		}
		
		switch(input){
			case 2:
				while(input != 1){
					cout << "PATRON" << endl;
					cout << " [1] Return to Main Menu" << endl;
					cout << " [2] Add Patron" << endl;
					cout << " [3] Edit Patron" << endl;
					cout << " [4] Delete Patron" << endl;
					cout << " [5] Search for Patron" << endl;
					cout << " [6] Print Patron" << endl;
					cout << " [7] Print Patrons" << endl;
					cin >> input;
					cin.ignore();
					switch(input){
						case 1:
							continue;
						case 2://Add Patron
							cout << "Insert Name:" << endl;
							getline(cin, Author);
							cout << "Insert ID:" << endl;
							cin >> ID;
							cin.ignore();
							cout << "Insert Books checked out:" << endl;
							cin >> Books_Out;
							cin.ignore();
							cout << "Insert current Balance:" << endl;
							cin >> Books_Out;
							cin.ignore();
							patron = new Patron(Name, ID, Books_Out, Balance);
							P.push_back(patron);
							break;
						case 3://Edit Patron
							
							break;
						case 4://Delete Patron
							break;
						case 5://Search for Patron
							break;
						case 6://Print Patron
							break;
						case 7://Print Patrons
							break;
					}
				}
				input = 0;
				break;
			case 3:
				while(input != 1){
					cout << "LOAN" << endl;
					cout << " [1] Return to Main Menu" << endl;
					cout << " [2] Check In" << endl;
					cout << " [3] List Overdue" << endl;
					cout << " [4] List Books" << endl;
					cout << " [5] Update Status" << endl;
					cout << " [6] Recheck" << endl;
					cout << " [7] Edit Loan" << endl;
					cout << " [8] Report Lost" << endl;
					cin >> input;
					cin.ignore();
					switch(input){
						case 1:
							continue;
						case 2://Check In
							while(input != 1){
								cout << "Type of item to add:" << endl;
								cout << " [1] Return to Previous Menu" << endl;
								cout << " [2] Book" << endl;
								cout << " [3] Audio CD" << endl;
								cout << " [4] DVD" << endl;
								cin >> input;
								cin.ignore();
								switch(input){
									case 1:
										continue;
									case 2://Book
										cout << "Insert Author:" << endl;
										getline(cin, Author);
										cout << "Insert Title:" << endl;
										getline(cin, Title);
										cout << "Insert ISBN_Num:" << endl;
										cin >> ISBN_Num;
										cin.ignore();
										cout << "Insert Category:" << endl;
										getline(cin, Category);
										book = new Book(Author,Title,ISBN_Num,Category);
										I.push_back(book);
										break;
									case 3://CD
										cout << "Insert Artist:" << endl;
										getline(cin, Artist);
										cout << "Insert Title:" << endl;
										getline(cin, Title);
										cout << "Insert NumTracks:" << endl;
										cin >> NumTracks;
										cin.ignore();
										cout << "Insert Release Date:" << endl;
										getline(cin, releaseDate);
										cd = new CD(Artist,Title,NumTracks,releaseDate, Genre);
										I.push_back(cd);
										break;
									case 4://DVD
										cout << "Insert Title:" << endl;
										getline(cin, Title);
										cout << "Insert Category:" << endl;
										getline(cin, Category);
										cout << "Insert Runtime:" << endl;
										getline(cin, Runtime);
										cout << "Insert Studio:" << endl;
										getline(cin, Studio);
										cout << "Insert Release Date:" << endl;
										getline(cin, releaseDate);
										dvd = new DVD(Title,Category,Runtime,Studio,releaseDate);
										I.push_back(dvd);
										break;
								}
							}
							input = 0;
							break;
						case 3://List Overdue
							
							break;
						case 4://List Books
							break;
						case 5://Update Status
							break;
						case 6://Recheck
							break;
						case 7://Edit Loan
							break;
						case 8://Report Lost
							break;
					}
				}
				input = 0;
				break;
			case 4:
				while(input != 1){
					cout << "LIBRARY ITEM" << endl;
					cout << " [1] Return to Main Menu" << endl;
					cout << " [2] Add Item" << endl;
					cout << " [3] Delete Item" << endl;
					cout << " [4] Search for Item" << endl;
					cout << " [5] Print Books" << endl;
					cout << " [6] Print" << endl;
					cout << " [7] Edit Loan" << endl;
					cout << " [8] Report Lost" << endl;
					cin >> input;
					cin.ignore();
					switch(input){
						case 1:
							continue;
						case 2://Add item
							while(input != 1){
								cout << "Type of item to add:" << endl;
								cout << " [1] Return to Previous Menu" << endl;
								cout << " [2] Book" << endl;
								cout << " [3] Audio CD" << endl;
								cout << " [4] DVD" << endl;
								cin >> input;
								cin.ignore();
								switch(input){
									case 1:
										continue;
									case 2://Book
										cout << "Insert Author:" << endl;
										getline(cin, Author);
										cout << "Insert Title:" << endl;
										getline(cin, Title);
										cout << "Insert ISBN_Num:" << endl;
										cin >> ISBN_Num;
										cin.ignore();
										cout << "Insert Category:" << endl;
										getline(cin, Category);
										book = new Book(Author,Title,ISBN_Num,Category);
										I.push_back(book);
										break;
									case 3://CD
										cout << "Insert Artist:" << endl;
										getline(cin, Artist);
										cout << "Insert Title:" << endl;
										getline(cin, Title);
										cout << "Insert NumTracks:" << endl;
										cin >> NumTracks;
										cin.ignore();
										cout << "Insert Release Date:" << endl;
										getline(cin, releaseDate);
										cd = new CD(Artist,Title,NumTracks,releaseDate, Genre);
										I.push_back(cd);
										break;
									case 4://DVD
										cout << "Insert Title:" << endl;
										getline(cin, Title);
										cout << "Insert Category:" << endl;
										getline(cin, Category);
										cout << "Insert Runtime:" << endl;
										getline(cin, Runtime);
										cout << "Insert Studio:" << endl;
										getline(cin, Studio);
										cout << "Insert Release Date:" << endl;
										getline(cin, releaseDate);
										dvd = new DVD(Title,Category,Runtime,Studio,releaseDate);
										I.push_back(dvd);
										break;
								}
							}
							input = 0;
							break;
						case 3://Delete Item
							cout << "Insert Title:" << endl;
							getline(cin, Title);
							for(auto& it : I){
								if((*it).GetTitle() == Title){
									cout <<"HI"<<endl;
								}
							}
							break;
						case 4://Search for Item
							break;
						case 5://Print Books
							break;
						case 6://Print
							break;
						case 7://Edit Loan
							break;
						case 8://Report Lost
							break;
					}
				}
				input = 0;
				break;
		}
		
		if(input == 0){
			continue;
		}
		
		cin >> input;
		cin.ignore();
	}
	cout << "Program has been exited." << endl;
    return 0;
}
