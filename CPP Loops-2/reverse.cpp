// Q4 - Write a program to reverse a given integer number.

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int num , reverse = 0,rem;
    //Take input here
    cin >> num ;
    //reverse number
    while (num > 0)
    {
        //Evalute digit
        rem = num%10;
        //Do reverse here
        reverse = reverse *10 + rem;
        num /= 10;
    }
    //Display output here
    cout << reverse << endl;
    
    return 0;
}
