/*Write a C++ program to create an employee class containing following
data members: employee name, employee number, basic, DA, IT, net
salary and calculate the gross salary of the employee*/

#include<iostream>
#include<string>
using namespace std;

class Employee {
    public:
    string name;
    int no;
    double basic;
    double da;
    double it;
    double net;
    double gross;

    void getdet(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter number: ";
        cin>>no;
        cout<<"Enter basic: ";
        cin>>basic;
        cout<<"Enter da: ";
        cin>>da;
        cout<<"Enter it: ";
        cin>>it;
    }

    void calc(){
       gross=basic+da;
       net=gross-it;
    }
    
    void displaydet(){
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee number: "<<no<<endl;
        cout<<"Employee basic: "<<basic<<endl;
        cout<<"Employee da: "<<da<<endl;
        cout<<"Employee it: "<<it<<endl;
        cout<<"Employee gross: "<<gross<<endl;
        cout<<"Employee net: "<<net<<endl;
    }
};

int main(){
    Employee e1;
    e1.getdet();
    e1.calc();
    e1.displaydet();
    return 0;
}