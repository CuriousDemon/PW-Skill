#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int l,r,n,sum = 0;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        sum += arr[i];
    }
    cout << sum;

}