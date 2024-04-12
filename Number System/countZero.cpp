// Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.
// Note: Don’t count the preceding zeros.
// For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.


#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int num,zero = 0,rem;
    //Take input here
    cin >> num;
    //count zeros
    while (num > 0)
    {
        rem = num%2;
        if(rem == 0) zero++;
        num /= 2;
        
    }
    //Display output
    cout << zero <<endl;
    
    return 0;
}