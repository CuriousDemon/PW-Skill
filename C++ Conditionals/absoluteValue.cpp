// Q2 - Write a program to print absolute value of a number entered by the user.

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles
    int num;
    //Take input here
    cin >> num;
    //make absolute number
    if(num > 0) cout << num << endl;
    else cout << -num << endl;

    return 0;
}