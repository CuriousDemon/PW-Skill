#include <iostream>
using namespace std;

int main()
{
    int n,mul= 1;
    int arr[100];
    int pro[100] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mul = 1;
        for (int j = 0; j < n; j++)
        {
            if( j == i) continue;
            mul *= arr[j];
        }
        pro[i] = mul;
        
    }
    cout <<"[";
    for (int i = 0; i < n; i++)
    {
        cout << pro[i] << " ";
    }
    cout <<"]"<<endl;
    
    
}