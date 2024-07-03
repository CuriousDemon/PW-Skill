#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[100][100];
    int(*ptr)[100] = arr;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(*(ptr + i) + j);
        }
    }
    for (int i = 0; i < n; i++)
    {

        sum += *(*(ptr + i) + i);
    }
    cout << sum;
}