#include <cstdlib>
#include <string>
#include "DVD.h"

using namespace std;


DVD::DVD(string Title,string Category,string Runtime,string Studio,string releaseDate){
    this->Title = Title;
	this->Category = Category;
	this->Runtime = Runtime;
	this->Studio = Studio;
	this->releaseDate = releaseDate;
}

        
void DVD::SetTitle(string Title){
	this->Title = Title;
}
string DVD::GetTitle() const{
	return Title;
}

void DVD::SetCategory(string Category){
	this->Category = Category;
}
string DVD::GetCategory() const{
	return Category;
}

void DVD::SetRuntime(string Runtime){
	this->Runtime;
}
string DVD::GetRuntime() const{
	return Runtime;
}

void DVD::SetStudio(string Studio){
	this->Studio = Studio;
}
string DVD::GetStudio() const{
	return Studio;
}

void DVD::SetReleaseDate(string releaseDate){
	this->releaseDate = releaseDate;
}
string DVD::GetReleaseDate() const{
	return releaseDate;
}

