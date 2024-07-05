// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

void subset(int *arr, int n, int x, vector<vector<int>> &res,vector <int> temp ={}, int idx  = 0)
{
    if (idx == n)
    {
        if(temp.size() == x)
            res.push_back({temp});
        return;
    }
    temp.push_back(arr[idx]);
    subset(arr,n,x,res,temp,idx+1);
    temp.pop_back();
    subset(arr,n,x,res,temp,idx+1);

    
    

}

int main()
{
    int n, r;
    int arr[n];
    vector<vector<int>> result;
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subset(arr, n, r, result);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < r; j++)
        {

            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}