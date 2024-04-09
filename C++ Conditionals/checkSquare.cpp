// Q1 - Write a program which takes the values of length and breadth from user and check if it is a square or not.

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles
    int length,breadth;
    //Take input here
    cout << "Enter length : ";
    cin>>length;
    cout << "Enter breadth : ";
    cin>>breadth;
    //Check condition
    if(length == breadth) cout<< "It is a Square"<<endl;
    else cout<< "It is a Rectangle"<<endl;

    return 0;
}