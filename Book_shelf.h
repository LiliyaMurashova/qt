#ifndef BOOK_SHELF_H
#define BOOK_SHELF_H
#include <iostream>
#include <string>
#include "shelf.h"
#include "PrintBook.h"
#include <vector>

using namespace std;
class Book_shelf{
	protected:
		vector<shelf> shelfs;

	public:
		void addBook(PrintBook pb, int shelf_id){
			if(shelf_id<shelfs.size()-1){
				shelfs[shelf_id].addBook(pb);
			}else{
				cout<<"error in shelf id";
			}
		}
		PrintBook getBook(int shelf_id, int book_id){
			if(shelf_id<shelfs.size()-1){
				shelfs[shelf_id].getBook(book_id);
			}else{
                cout<<"error in shelf id! \n";
			}
		}
		void addshelf(){
			shelf Shelf;
			shelfs.push_back(Shelf);
		}
        int getShelfNumber();
        return shelfs.size();
}
		void Print(){
            cout <<"BookShelf Info: "<<shelfs.size()<<":\n";
			for(int i=0;shelfs.size();i++) {
				cout<<"\t Shelf #"<<i++<<"\n";
				shelfs[i].Print();
			}
			
		}
};

#endif
