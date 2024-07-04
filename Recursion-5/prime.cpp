#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n,int i = 2)
{
    if(n < 2) return false ;
    if(i*i > n) return true;
    if(n%i == 0) return false; 
    return checkPrime(n,i+1);
}

int main() {
    int n;
    cin >> n;
    cout << ((checkPrime(n)) ? "YES" : "NO");
    return 0;
}