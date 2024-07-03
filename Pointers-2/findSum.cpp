#include <iostream>
using namespace std;

int main()
{
    int sum = 0,n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr+i);
        

    }
    for (int i = 0; i < n; i++)
    {
        sum+= *(arr+i);

    }
    cout << sum;
    
}