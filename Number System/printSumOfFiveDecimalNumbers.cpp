// Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles
    int n1,n2,n3,n4,n5,res,bin = 0,rem,power = 1;
    char o;
    //Take five digit input as (1,2,3,4,5)
    cin >> n1 >> o >>  n2 >> o >> n3 >> o >> n4 >> o >> n5;
    //convert decimal to binary
    res = n1+n2+n3+n4+n5;
    while (res > 0)
    {
        rem = res % 2;
        bin += rem *power;
        power *= 10;
        res /=2;
    }
    //Display the output
    cout << bin << endl;
    return 0;
}