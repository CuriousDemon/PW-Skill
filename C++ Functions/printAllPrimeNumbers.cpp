// Q5 - Given two numbers a and b, write a program to print all the prime numbers present between a and b.


#include <iostream>
using namespace std;

//Declare prototype
void printAllPrime(int lb,int ub);

int main()
{
    //Declare varibles
    int lb,ub;
    //Take input
    cin >> lb >> ub;
    //call function
    printAllPrime(lb,ub);
    return 0;
}

//Define function
void printAllPrime(int lb,int ub)
{
    int flag = 1;
    for (int i = lb; i <= ub; i++)
    {
        flag = 1;
        for (int k = 2; k <= i/2; k++)
        {
            if(i%k == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag) cout <<  i << " ";
        
    }
    cout <<endl;
}