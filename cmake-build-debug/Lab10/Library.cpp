//
// Created by nquasem on 12/1/2023.
//
#include "Library.h"
#include <iostream>
#include <string>
using namespace std;

Library::Library() {
    for (int i = 0; i < 10; i++) {
        books[i] = "";
    }
}

bool Library::addBook(std::string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            return false;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (books[i] == "") {
            books[i] = bookName;
            return true;
        }
    }
    cout<<"Cannot add the book.\n";
    return false;
}

bool Library::removeBook(std::string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    cout<<"Cannot remove the book.";
    return false;
}

void Library::print() {
    cout<<"Library contents: ";
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}