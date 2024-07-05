#include <iostream>
#include <iomanip>
using namespace std;

void sumOfElement(int *arr, int &n, int idx = 0)
{
    if (idx == n)
    {
        n = n - 1;
        return;
    }
    arr[idx] = arr[idx] + arr[idx + 1];
    sumOfElement(arr, n, idx + 1);
}

void printElement(int *arr, int n, int idx = 0)
{
    if (idx == n)
        return;
    cout <<left;
    cout <<setw(3)<< arr[idx] << " " ;
    printElement(arr, n, idx + 1);
}

void sumTriangle(int *arr, int n)
{
    printElement(arr, n);
    while (n != 1)
    {
        cout<<endl; 
        sumOfElement(arr,n);
        printElement(arr,n);
    }
}

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sumTriangle(arr,n);
    cout << endl;
}