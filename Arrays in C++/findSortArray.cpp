// Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.

#include <iostream>
using namespace std;

//Prototype declare here
int findPivot(int arr[], int size);

int main()
{
    // Declare an array
    int n = 6, num;
    int arr[n] = {1,6,5,7,10,8,9};
    // call function
    cout << findPivot(arr, n) << endl;
    return 0;
}

//Define function here
int findPivot(int arr[], int size)
{
    int key, pivot = -1;
    for (int i = 0; i < size; i++)
    {
        key = arr[i];

        for (int j = 0; j < i; j++)
        {

            if (key < arr[j])
            {
                key = -1;
                break;
            }
        }
        if(key == -1 || i+1 == size) continue;
        for (int j = i + 1; j < size; j++)
        {
            if (key > arr[j])
            {
                key = -1;
                break;
            }
        }
        if(key != -1) pivot = key;
    }
    return pivot;
}