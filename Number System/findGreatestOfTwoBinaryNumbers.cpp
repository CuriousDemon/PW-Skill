// Q3 - Given two binary numbers, return the greatest of these numbers in decimal format.

#include <iostream>
using namespace std;

int main()
{
    //Declare varible
    int num1,num2,temp,rem,res,pow;
    char op[3];
    //Take input here as (1001 and 0100)
    cin >> num1 >> op >> num2;
    //Convert binary to decimal
    temp = num1;
    //Iterate the loop for two times
    for (int i = 0; i < 2; i++)
    {
        pow = 1;
        res = 0;
        while(temp > 0)
        {
            rem = temp % 10;
            res += rem*pow;
            pow *= 2;
            temp /= 10;
        }
        if(i == 1) continue;
        num1 = res;
        temp = num2;
    }
    num2 = res;
    //Find greatest between two decimal numbers
    if(num1 > num2) cout << num1 << endl;
    else cout << num2 << endl;
    
    return 0;
}