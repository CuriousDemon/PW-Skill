// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include <iostream>
using namespace std;

int main() {
    int d1,d2,d3,d4,d5,sum,d;
    cin>> d;
    d5 = d%10;
    d4 = (d/10)%10;
    d3 = (d/100)%10;
    d2 = (d/1000)%10;
    d1 = (d/10000);

    sum = d1+d4;
    cout<<d1<<"+"<<d4<<"="<<sum<<endl;

    return 0;
}






































