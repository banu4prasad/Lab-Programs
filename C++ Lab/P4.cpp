// Write a C++ program to illustrate function overloading in adding the distance between objects.

#include<iostream>
using namespace std;

class Distance{
    public:
    int feet;
    int inches;

    void setdis(){
        cout<<"Enter feet: "<<endl;
        cin>>feet;
        cout << "Enter inches: " << endl;
        cin >> inches;
    }

    void display(){
        cout<<"The distance is: "<<feet<<" feet "<<inches<<" inches"<<endl;
    }
    void add(Distance d1, Distance d2){
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        feet=feet+(inches/12);
        inches=inches%12;
    }
    void add( Distance *d1, Distance *d2){
        feet = d1->feet + d2->feet;
        inches = d1->inches + d2->inches;
        feet = feet + (inches / 12);
        inches = inches % 12;
    }
};

int main(){
    Distance d1,d2,d3;
    d1.setdis();
    d2.setdis();
    d3.add(d1,d2);
    d3.display();
    d3.add(&d1,&d2);
    d3.display();
    return 0;
}