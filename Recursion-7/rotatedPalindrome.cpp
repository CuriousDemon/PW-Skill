#include <bits/stdc++.h>
using namespace std;

string rotat(string &str, int id = 1)
{
    char temp;
    if (id == str.length())
        return str;
    temp = str[id - 1];
    str[id - 1] = str[id];
    str[id] = temp;
    return rotat(str, id + 1);
}

bool checkPalindrome(string &str,int id = 0)
{
    int n = str.length();
    if(id > (str.length()/2-1)) return true;
    if(str[id] != str[n-id-1]) return false;
    return checkPalindrome(str,id+1); 
}

string rotatPalindrome(string &str)
{
    int n = str.length();
    while (--n)
    {
        rotat(str);
        if(checkPalindrome(str))
            return "yes";
    }
    return "no";
}

int main()
{
    string str ;
    cin >> str;
    cout << rotatPalindrome(str);
}
