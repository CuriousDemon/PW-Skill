// Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such that they belong to different arrays and are not at the same index. Here 1<size<101


#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    //Declare two array and variables
    int n = 5;
    int a[n] = {5,6,10,4,9};
    int b[n] = {4,2,3,1,5};
    int idxa,idxb,min;
    //find minimum number index of a array
    min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(min > a[i]) 
        {
            min = a[i];
            idxa = i;
        }
    }
    //find minimum number index of b array
    min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(min > b[i] && i != idxa) 
        {
            min = b[i];
            idxb = i;
        }
    }
    //Display sum of two different array minimum
    cout << a[idxa]+b[idxb] <<endl;

    return 0;
}