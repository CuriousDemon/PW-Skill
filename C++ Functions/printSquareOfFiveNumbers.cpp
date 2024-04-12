// Q1 - Write a function to print squares of the first 5 natural numbers.


#include <iostream>
using namespace std;

void printSquare(int a,int b);

int main()
{
    printSquare(1,5);
    return 0;
}

void printSquare(int a,int b)
{
    for (int i = a; i <= b; i++)
    {
        cout << i*i << " " ;
    }
    cout << endl;
}