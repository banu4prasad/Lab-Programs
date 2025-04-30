/* Write a C++ program to create a class template to find the maximum of
two numbers.The class template should work with different data types
such as int and float.The program should include a member function that
compares the two numbers and returns the maximum. */

#include<iostream> 
using namespace std;

template<class T>
T findmax(T a, T b){
    return (a>b)?a:b;
}

int main(){
    cout<<findmax(10,20)<<endl;
    
    cout<<findmax(10.2,11.4)<<endl;
    return 0;
}