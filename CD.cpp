#include <cstdlib>
#include <string>
#include "CD.h"

using namespace std;


CD::CD(string Artist,string Title,int NumTracks,string releaseDate,string Genre){
    this->Artist = Artist;
	this->Title = Title;
	this->NumTracks = NumTracks;
	this->releaseDate = releaseDate;
	this->Genre = Genre;
}
   
void CD::SetArtist(string Artist){
	this->Artist = Artist;
}
string CD::GetArtist() const{
	return Artist;
}

void CD::SetTitle(string Title){
	this->Title = Title;
}
string CD::GetTitle() const{
	return Title;
}

void CD::SetNumTracks(int NumTracks){
	this->NumTracks = NumTracks;
}
int CD::GetNumTracks() const{
	return NumTracks;
}

void CD::SetReleaseDate(string releaseDate){
	this->releaseDate = releaseDate;
}
string CD::GetReleaseDate() const{
	return releaseDate;
}

void CD::SetGenre(string Genre){
	this->Genre = Genre;
}
string CD::GetGenre() const{
	return Genre;
}