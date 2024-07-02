#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m,n,max = INT_MIN,sum = 0,id;
    cin >> m >> n;
    int matrix[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }     
    }

    for (int i = 0; i < m; i++)
    {
        sum = matrix[i][0];
        for (int j = 1; j < n; j++)
        {
            sum += matrix[i][j];
        }
        if(sum > max)
        {
            max = sum;
            id = i;
        }
    }
    
    cout << id+1;
}