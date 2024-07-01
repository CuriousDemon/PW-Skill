#include <iostream>
using namespace std;

int main()
{
    int row, l, u, m = 0;
    cin >> row;
    int arr[row][2];
    int mergeArr[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    l = arr[0][0];
    u = arr[0][1];
    for (int i = 1; i < row; i++)
    {
        if (arr[i][0] < u)
        {
            if (arr[i][0] < l)
                l = arr[i][0];
            if (arr[i][1] > u)
                u = arr[i][1];
        }
        else
        {
            mergeArr[m][0] = l;
            mergeArr[m][1] = u;
            m++;
            l = arr[i][0];
            u = arr[i][1];
        }
    }
    mergeArr[m][0] = l;
    mergeArr[m][1] = u;
    m++;

    cout << "[ ";
    for (int i = 0; i < m; i++)
    {
        cout << "{ ";
        for (int j = 0; j < 2; j++)
        {
            cout << mergeArr[i][j] << " ";
        }
        cout << "} ";
    }
    cout << "] " << endl;
}
