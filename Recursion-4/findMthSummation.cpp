#include <iostream>
using namespace std;

int SUM(int n,int m)
{
    if(m == 1) 
    return (n *(n+1))/2;

    int sum = SUM(n,m-1);
    return (sum*(sum+1))/2; 

}

int main()
{
    int m,n;
    cin >> n >> m;

    cout << SUM(n,m);;
}