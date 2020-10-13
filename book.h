#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;
class book
{
	public:
		string Name;
		int Pages;
		Book(){
			Name = '-';
			Pages = 0;
		}
		string GetName(){
			return Name;
		}
		int GetPages(){
			return Pages;
		
		}
		void Print(){
			cout<<"Book: "<<Name<<", pages: "<<Pages<<"\n";
		}
};

#endif
