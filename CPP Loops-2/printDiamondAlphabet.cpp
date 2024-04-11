// Q6- Write a program to print alphabet diamond pattern

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles here
    int n,mid,count = 0;
    char alph;
    //Take input here
    cin >> n;
    //print pattern
    mid = (2*n+1)/2+1;
    for (int i = 1; i <= 2*n+1; i++)
    {
        alph = 'A';
        if(i <= mid ) count++;
        else count--;
        //Print space here
        for (int j = 1; j <=mid-count; j++)
        {
            cout << " ";
        }
        //print alphabet here
        for (int j = 0; j < 2*count-1; j++)
        {
            cout << alph;
            alph++;
        }
        cout << endl;
    }
    
    return 0;
}