#ifndef PRINTBOOK_H
#define PRINTBOOK_H
#include <iostream>
#include <string>
#include "book.h"
using namespace std;

class PrintBook: public book{
	private:
		int PrintPages;	
	public:
		PrintBook(){
			PrintPages=0;
		}
		int getPrintPages(){
			return PrintPages;
		}
		void setName (string s){
			Name=s;
		}
		void setPages (int p){
			Pages=p;
			PrintPages=p/16;
		}
};
#endif
