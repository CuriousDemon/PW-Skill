#include <bits/stdc++.h>
using namespace std;

pair<int,int> Maxmin(vector<int> &arr)
{
    pair<int,int> values;
    values.first = INT_MIN;
    values.second = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if(values.first < arr[i]) values.first = arr[i];
        if(values.second > arr[i]) values.second = arr[i];
    }
    return values;
}

int main()
{
    int x;
    pair<int,int> values;
    vector <int> arr;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    values = Maxmin(arr);
    
    cout <<"Max :- " <<  values.first << "   Min :- " << values.second << endl;


}