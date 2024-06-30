#include <iostream>
using namespace std;

void markRow(int arr[100][100], int m, int n, int row)
{
    int k;
    for (k = 0; k < n; k++)
    {
        if (arr[row][k] != 0)
            arr[row][k] = -1;
    }
}
void markCol(int arr[100][100], int m, int n, int col)
{
    for (int k = 0; k < n; k++)
    {
        if (arr[k][col] != 0)
            arr[k][col] = -1;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                markRow(arr,m,n,i);
                markCol(arr,m,n,j);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == -1) arr[i][j] = 0;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    
}