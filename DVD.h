#ifndef DVD_H
#define DVD_H

#include <string>
#include "LibraryItem.h"
using namespace std;

class DVD : public LibraryItem{
    public:
        DVD(string Title,string Category,string Runtime,string Studio,string releaseDate);
        
		void SetTitle(string Title);
		string GetTitle() const;

		void SetCategory(string Category);
		string GetCategory() const;

		void SetRuntime(string Runtime);
		string GetRuntime() const;
		
		void SetStudio(string Studio);
		string GetStudio() const;
		
		void SetReleaseDate(string releaseDate);
		string GetReleaseDate() const;
    private:
        string Title;
		string Category;
		string Runtime;
		string Studio;
		string releaseDate;
};
#endif
