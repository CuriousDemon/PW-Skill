#include <iostream>
using namespace std;

int greyCode(int n)
{
    int gc = 0;
    if(n == 1) return n;
    
    gc = greyCode(n/10)*10 + ((n/10)%10) ^ (n%10);
    return gc;
}

int main()
{
    int n;
    cin >> n;
    cout << greyCode(n);
}