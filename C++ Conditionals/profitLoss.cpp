// Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles
    int sp,cp;
    //Take input here
    cout << "Enter cost price = ";
    cin >> cp;
    cout << "Enter selling price = ";
    cin >> sp;
    //Check profit or loss
    if((sp-cp) >= 0) cout << "Profit = " << sp-cp <<endl; 
    else cout << "Loss = " << cp-sp <<endl;
    return 0;
}