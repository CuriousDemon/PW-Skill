// Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101


#include <iostream>
using namespace std;

int main()
{
    //Declare an array
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int temp;
    //Reverse an array
    for (int i = 0; i <= n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    //Show the reverse array
    for(int ele : arr)
    {
        cout << ele << " " ;
    }
    cout << endl;
    
    return 0;
}