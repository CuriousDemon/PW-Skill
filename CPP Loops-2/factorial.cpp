// Q1 - Write a program to calculate the factorial of a number.


#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int num,mul = 1;
    //Take input here
    cin >> num;
    //Evalute factorial 
    for (int i = 1; i <= num; i++)
    {
        mul *=i;
    }
    //Display output
    cout << mul << endl;

    return 0;
}