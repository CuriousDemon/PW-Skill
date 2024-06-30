#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m,n,max = INT_MIN;
    cin >> m >> n;
    int arr[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
           cin >> arr[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    cout << max;
}