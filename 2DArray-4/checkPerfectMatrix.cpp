#include <iostream>
using namespace std;

bool checkDiagonal(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && matrix[i][j] == 0)
                return false;
            else if (i != j && matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int matrix[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    if (checkDiagonal(matrix, n))
        cout << "true";
    else
        cout << "false";
}