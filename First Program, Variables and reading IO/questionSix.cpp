// Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"Type a : ";
    cin>>a;
    cout<<"Type b : ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;
    cout<< "a = "<<a<<endl;
    cout<< "b = "<<b<<endl;
    return 0;
}

