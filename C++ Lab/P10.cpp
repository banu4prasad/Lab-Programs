// Write a C++ program to perform the addition and subtraction of two complex numbers using the binary(+) and (-) operator.

#include<iostream>
using namespace std;

class Complex{
    public:
    float real,imag;
    

    Complex(float r, float i):real(r),imag(i){}

    Complex operator + (Complex c){
        return Complex(real+c.real,imag+c.imag);
    }
    Complex operator - (Complex c){
        return Complex(real-c.real,imag-c.imag);
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(10,20),c2(30,40);
    Complex sum=c1+c2;
    Complex diff=c1-c2;
    cout<<"Sum:"<<endl;
    sum.display();
    cout << "Subtraction:" << endl;
    diff.display();
    return 0;
}