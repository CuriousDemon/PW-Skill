#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int matrix[100][100] = {0};
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //Prefix sum

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            matrix[i][j] = matrix[i][j-1]+matrix[i-1][j]-matrix[i-1][j-1]+matrix[i][j];
        }
        
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}