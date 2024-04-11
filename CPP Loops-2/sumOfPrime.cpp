// Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.

#include <iostream>
using namespace std;

int main()
{
    // Declare varibles
    int num, p1, p2, flag, last;
    // Take input here
    cout << "Enter a +ve Integer : ";
    cin >> num;
    // Find two prime numbers
    for (int n = 2; n <= num/2; n++)
    {
        flag = 1;
        //find first prime number
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            flag = 1;
            //find second prime number
            for (int i = 2; i <= (num - n)/2; i++)
            {
                if ((num - n) % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                cout << num << " = " << (n) << " + " << (num-n) <<endl;
            }
        }
    }

    return 0;
}