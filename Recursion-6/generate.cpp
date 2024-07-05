#include <bits/stdc++.h>
using namespace std;

void printArr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void generateArr(int *a, int *b, int *temp, int i, int j, int m, int n, int len, bool flag)
{
    if (flag)
    {
        if (len)
            printArr(temp, len + 1);

        for (int k = i; k < m; k++)
        {
            if (!len)
            {
                temp[len] = a[k];
                generateArr(a, b, temp, k + 1, j, m, n, len, !flag);
            }
            else
            {
                if (a[k] > temp[len])
                {
                    temp[len + 1] = a[k];
                    generateArr(a, b, temp, k + 1, j, m, n, len + 1, !flag);
                }
            }
        }
    }else{
        for (int f = j; f < n; f++)
        {
            if(temp[len] < b[f])
            {
                temp[len+1] = b[f];
                generateArr(a,b,temp,i,f+1,m,n,len+1,!flag);
            }
        }
        
    }
}
void generate (int *a,int *b,int m,int n)
{
    int temp[m+n];
    generateArr(a,b,temp,0,0,m,n,0,true);
}

int main()
{

    int m = 2, n = 1;
    int A[m] = {5,7};
    int B[n] = {10};

    generate(A, B, m, n);

    return 0;
}