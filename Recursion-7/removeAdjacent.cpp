#include <bits/stdc++.h>
using namespace std;

string rmAdjacent(string &str, string res = "", int id = 0, char ch = ' ')
{
    if (id == str.length())
    {
        return res;
    }
    if (ch == str[id])
        return rmAdjacent(str, res, id + 1, ch);
    else
    {
        ch = str[id];
        res.push_back(str[id]);
        return rmAdjacent(str, res, id + 1, ch);
    }
}

int main()
{
    string str, res = "";
    cin >> str;
    res = rmAdjacent(str);
    cout << res;
}