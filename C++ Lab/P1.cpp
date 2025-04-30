/* Write a C++ program to manage the details of a book in a library. Create
an object of the class and call displayDetails() function to display the
book's information. */

#include<iostream>
#include<string>
using namespace std;

class Book {
 public:
  string author;
  string title;
  int pn;
  int year;
  double price;

  Book(string t, string a, int p, int y, double pr){
    title=t;
    author=a;
    pn=p;
    year=y;
    price=pr;
  }

  void DisplayDetails(){
    cout<<"Author:"<<author<<endl;
    cout << "Title:" << title << endl;
    cout << "Page number:" << pn << endl;
    cout << "Year:" << year << endl;
    cout << "Price:" << price << endl;
  }
};

int main() {
    Book b1("JK Rowling","Harry Potter ",2323,2077,5000);
    b1.DisplayDetails();
}