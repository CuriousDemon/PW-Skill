#include <iostream>
using namespace std;

int product (int x,int y)
{
    if( y == 0) return 0;

    return x+product(x,y-1);
}

int main()
{
    int x,y;
    cin >> x >> y;

    cout << product(x,y);
}