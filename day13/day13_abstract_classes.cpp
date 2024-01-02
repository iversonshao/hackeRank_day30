#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Book{
public:
    Book(const string& title, const string& author, int price): 
        title(title), author(author), price(price){}

    virtual void display() const {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }
protected:
    string title;
    string author;
    int price;
};

class MyBook : public Book{
public:
    MyBook(const string& title, const string& author, int price)
        : Book(title, author, price) {}
    
    void display() const override{
        Book::display();
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string title, author;
    int price;

    getline(cin, title);
    getline(cin, author);
    cin >> price;
    
    MyBook mybook(title, author, price);
    mybook.display();
    return 0;
}
