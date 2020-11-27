#ifndef CD_H
#define CD_H

#include <string>
#include "LibraryItem.h"
using namespace std;

class CD : public LibraryItem{
    public:
        CD(string Artist,string Title,int NumTracks,string releaseDate,string Genre);
   
		void SetArtist(string Artist);
		string GetArtist() const;
		
		void SetTitle(string Title);
		string GetTitle() const;
		
		void SetNumTracks(int NumTracks);
		int GetNumTracks() const;
		
		void SetReleaseDate(string releaseDate);
		string GetReleaseDate() const;
		
		void SetGenre(string Genre);
		string GetGenre() const;
		
    private:
        string Artist;
		string Title;
		int NumTracks;
		string releaseDate;
		string Genre;
};
#endif
