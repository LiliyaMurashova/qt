#ifndef SHELF_H
#define SHELF_H
#include <iostream>
#include <string>
#include "PrintBook.h"
#include <vector>
using namespace std;

class shelf{
	protected:
		vector<PrintBook> pbooks;
	public:
		shelf(){
			//TODO: default actions
			}
		void addBook (PrintBook pb){
			pbooks.push_back(pb);
		}
		PrintBook getBook (int id){
			if(id<pbooks.size()-1){
				return pbooks[id];
			}else{
				cout<<"error in shelf id";
			}
		}	
		void Print(){
			cout << "shelf contents: \n";
			for (int i=0;i<pbooks.size();i++){
				pbooks[i].Print();
			}	
		}
};
#endif
