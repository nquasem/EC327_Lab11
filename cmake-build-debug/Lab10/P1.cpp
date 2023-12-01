//
// Created by nquasem on 12/1/2023.
//

#include <iostream>
#include "Library.h"
#include <string>
using namespace std;


int main(){
    Library library;
    string bookName;
    char choice;

    do{
        cout<<"Enter command: ";
        cin>>choice;
        switch(choice){
            case 'a':
                cin>>bookName;
                library.addBook(bookName);
                break;
            case 'r':
                cin>>bookName;
                library.removeBook(bookName);
                break;
            case 'p':
                library.print();
                break;
            case 'q':
                cout<<"Exiting\n";
                break;
            default:
                cout<<"\nInvalid choice";
        }
    }while(choice!='q');

    return 0;
}