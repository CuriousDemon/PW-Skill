#include <bits/stdc++.h>
using namespace std;

string reverseStr(string &str,int id = 0)
{
    int n = str.length();
    if(id > (str.length()/2-1)) return str;
    swap(str[id],str[n-id-1]);
    return reverseStr(str,id+1);
}

int main()
{
    string str;
    cin >> str;
    cout << reverseStr(str);

}
