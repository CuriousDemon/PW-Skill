#include <iostream>
using namespace std;

int main()
{
    int m, n, sum = 0, i, j,max = 0;
    cin >> m >> n;
    int matrix[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (i = 0; i <= m-3 ; i++)
    {
        for (j = 0; j <= n-3; j++)
        {
            sum = 0;
            for (int k = j; k < j+3; k++)
            {
                    sum += matrix[i][k];
                    sum += matrix[i+2][k];
            }
            sum += matrix[i+1][j+1];
            if(sum > max) max  = sum;
            
        }
    }
    
    cout << max;
}