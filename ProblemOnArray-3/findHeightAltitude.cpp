#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,m = INT_MIN;
    int height[n];
    int alt[n+1] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        alt[i+1] = alt[i]+height[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(m < alt[i]) m = alt[i];
    }
    cout << m;
}