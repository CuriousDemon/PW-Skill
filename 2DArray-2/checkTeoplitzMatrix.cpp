#include <iostream>
using namespace std;

bool checkDiagonal(int arr[100][100], int i, int j, int row, int col)
{
    int res = arr[i][j];
    while (++i < row && ++j < col)
    {
        if (arr[i][j] != res)
            return false;
    }
    return true;
}

int main()
{
    int row, col, flag = 1;
    cin >> row >> col;
    int arr[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Check diagonal first row
    for (int i = 0; i < col; i++)
    {
        if (!checkDiagonal(arr, 0, i, row, col))
        {
            flag = 0;
            break;
        }
    }
    // Check diagonal first col
    if (flag)
    {
        for (int j = 0; j < row; j++)
        {
            if (!checkDiagonal(arr, j, 0, row, col))
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        cout << "true";
    else
        cout << "false";
}