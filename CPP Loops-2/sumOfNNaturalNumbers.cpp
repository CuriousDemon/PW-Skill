// Q3 - Write a program to find the sum of n natural numbers.

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int num,sum = 0;
    //Take input here
    cin >> num;
    //Evalute sum of n natural numbers
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    //Display output
    cout << sum <<endl;
    return 0;
}