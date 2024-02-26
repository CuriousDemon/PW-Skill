// Write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>
using namespace std;

int main()
{
    int d,d1,d2,d3,sum;
    cin >> d;

    d3 = d%10;
    d2 = (d/10)%10;
    d1 = (d/100);
    
    sum = d1+d2+d3;
    cout<<sum<<endl;

    return 0;
}

































