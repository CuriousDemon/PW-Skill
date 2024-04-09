// Q4- Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles here
    int num;
    //Take input here
    cout << "Enter an integer here : ";
    cin >> num;
    //Check positive or not
    if(num >= 0) cout << num <<endl;
    else cout << "The number is negative and skipped" <<endl;
    return 0;
}