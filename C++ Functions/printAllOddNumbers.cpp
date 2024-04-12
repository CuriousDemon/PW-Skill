// Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers between them


#include <iostream>
using namespace std;

//Declare prototype
void printAllOdd(int lb,int ub);

int main()
{
    //Declare varibles
    int lb,ub;
    //Take input
    cin >> lb >> ub;
    //call function
    printAllOdd(lb,ub);
    return 0;
}

//Define function
void printAllOdd(int lb,int ub)
{
    for (int i = lb; i <= ub; i++)
    {
        if(i%2 != 0) cout << i << " ";
    }
    cout <<endl;
}