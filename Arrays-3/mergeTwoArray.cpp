#include <iostream>
using namespace std;

int main()
{
    // Declare and initialization array
    int m = 3, n = 3;
    int arr1[m] = {1, 2, 3};
    int arr2[n] = {4, 5, 6};
    int arr[(m+n)];
    int i = 0, j = 0, k = 0;
    // merge two array
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        arr[k] = arr1[i];
        k++;i++;
    }
    while (j < n)
    {
        arr[k] = arr2[j];
        k++;j++;
    }
    
    //print sorted array
    for (int s = 0; s < (m+n); s++)
    {
        cout << arr[s] << ", ";
    }
    cout <<endl;
    


    return 0;
}