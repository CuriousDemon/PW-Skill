#include <iostream>
using namespace std;

void upper(int matrix[100][100],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j ||j>i) cout << matrix[i][j] << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    
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
    upper(matrix,n);
    
}