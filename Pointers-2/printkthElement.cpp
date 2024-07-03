#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << *(arr+k) << endl;
}