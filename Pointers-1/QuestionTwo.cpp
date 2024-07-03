#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    int *ptr_x, *ptr_y;
    ptr_x = &x;
    ptr_y = &y;

    cout << *ptr_x**ptr_y;
}