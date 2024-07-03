#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,*ptr;
    cin >> n;
    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    

    ptr = (arr+n-1);
    for (int i = n-1; i >= 0 ; i--)
    {
        cout << *ptr << " ";
        ptr--;
    }
    cout <<endl;
    
}
