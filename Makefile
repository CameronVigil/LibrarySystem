output: main.o Book.o Loan.o Loans.o Patron.o Patrons.o LibraryItem.o CD.o DVD.o
	g++ -o output main.o Book.o Loan.o Loans.o Patron.o Patrons.o LibraryItem.o CD.o DVD.o
main.o: main.cpp
	g++ -c main.cpp
Book.o: Book.cpp Book.h
	g++ -c Book.cpp Book.h
Loan.o: Loan.cpp Loan.h
	g++ -c Loan.cpp Loan.h
Loans.o:Loans.cpp Loans.h
	g++ -c Loans.cpp Loans.h
Patron.o:Patron.cpp Patron.h
	g++ -c Patron.cpp Patron.h
Patrons.o:Patrons.cpp Patrons.h
	g++ -c Patrons.cpp Patrons.h
LibraryItem.o:LibraryItem.cpp LibraryItem.h
	g++ -c LibraryItem.cpp LibraryItem.h
CD.o:CD.cpp CD.h
	g++ -c CD.cpp CD.h
DVD.o:DVD.cpp DVD.h
	g++ -c DVD.cpp DVD.h

clean:
	rm *.o *.gch output
