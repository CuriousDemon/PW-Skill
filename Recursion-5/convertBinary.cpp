#include <iostream>
using namespace std;

int DectoBin(int n)
{
    int res = 0;
    if(n == 0 ) return n%2;
    res = DectoBin(n/2)*10 + n%2;
    return res;

}

int main()
{
    int n;
    cin >> n;
    cout << DectoBin(n);
}