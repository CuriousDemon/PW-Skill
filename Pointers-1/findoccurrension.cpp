#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int count = 0;
    string s;
    getline(cin ,s);
    c = s[0];
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(c == s[i]) count++;
    }
    
    cout <<s[0] << " " << s[s.size()-1] << " " << count;


}