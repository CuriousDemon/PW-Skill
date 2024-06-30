#include <iostream>
using namespace std;

int main()
{
    int n,odd = 0,sum = 0;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 != 0) odd++;
        if(odd%2 != 0 && odd > 1) odd++;
    }

    cout << odd;
    
}