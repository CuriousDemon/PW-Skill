#include <bits/stdc++.h>
using namespace std;


void findIdx(int *arr,int n,int key,vector<int> &res,int idx = 0 )
{
    if(idx == n) return;
    if(key == arr[idx]) 
    {
        res.push_back(idx);
    }
    findIdx(arr,n,key,res,idx+1);
}

int main()
{
    int key = 8,n = 3;
    vector <int> result;
    int arr[n];
    cin >> n >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    findIdx(arr,n,key,result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    
}