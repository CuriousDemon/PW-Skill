// Q7- Write a program to print + pattern given below 

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles
    int num,mid;
    //Take input here
    cin >> num;
    //print pattern
    mid = (2*num+1)/2+1;
    for (int i = 1; i <= 2*num+1; i++)
    {
        for (int j = 1; j <= 2*num+1; j++)
        {
            if( i == mid || j == mid) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}