#include <iostream>
using namespace std;

void printNumber(int n)
{
    if (n <= 0)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printNumber(n - 5);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    printNumber(n);
    return 0;
}