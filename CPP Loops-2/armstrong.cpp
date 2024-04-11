// Q2 - Write a program to print all Armstrong numbers between 100 to 500.


#include <iostream>
using namespace std;

int main()
{
    //Declare varible here
    int temp,rem,sum;
    //Evalute armstrong number between 100 - 500
    for (int i = 0; i <= 500; i++)
    {
        rem = 0;
        sum = 0;
        temp = i;
        while (temp > 0)
        {
            //Evalute every digit here
            rem = temp %10;
            sum += (rem*rem*rem);
            temp /= 10;

        }
        //Display armstrong number here
        if(sum == i) cout << i << endl;
        
    }

    return 0;
}