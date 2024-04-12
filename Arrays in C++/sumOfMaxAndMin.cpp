// Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101


#include <iostream>
using namespace std;

int main()
{
    //Declare an array
    int arr[5] = {1,3,6,5,2};
    int min,max;
    //find maximum and minimum
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    //Display sum of maximum and minimum number
    cout << max+min <<endl;
    
    return 0;
}