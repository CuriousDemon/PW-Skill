#include <iostream>
using namespace std;

void swapping (int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x,y;
    cin >> x >> y;
    swapping(x,y);
    cout << x << " " << y;
}