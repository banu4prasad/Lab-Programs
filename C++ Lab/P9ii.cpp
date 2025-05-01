/*Write a C++ program to overload unary operator as i) member function
ii) friend function.*/

#include<iostream>
using namespace std;
class Number{
    public:
    int value;
    Number(int v):value(v) {}
    friend Number operator -(Number& n);
    void display(){
        cout<<"Value:"<<value<<endl;

    }
};
Number operator -(Number& n){
    return Number(-n.value);
}
int main(){
cout<<"Before Unary:"<<endl;
Number n1(5);
n1.display();
Number n2=-n1;
cout<<"After Unary:"<<endl;
n2.display();
return 0;
}