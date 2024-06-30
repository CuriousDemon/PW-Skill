#include <iostream>
using namespace std;

int main()
{
    int q, x, n, l, r;
    int arr[100] = {0};
    cin >> q >> x >> n;
    while (q--)
    {
        cin >> l >> r;
        arr[l] += x;
        arr[r+1] += -x;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i+1] += arr[i];
    }
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}