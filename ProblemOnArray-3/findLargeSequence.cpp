#include <iostream>
using namespace std;
int main()
{
    int n,count = 0,m = 0;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0) count--;
        else count++;
        if(count == 0) m+=2;
    }
    cout << m;
    

}