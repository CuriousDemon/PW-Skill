#include <bits/stdc++.h>
using namespace std;

string concatAlt(string &str1,string &str2,string &res,bool flag = true,int id = 0)
{
    if(id >str1.length() || id > str2.length())
    {
        if(id < str1.length())
        {
            res = res+str1[id];
            return concatAlt(str1,str2,res,true,id+1);
        }
        else if (id < str2.length()){
            res = res+str2[id];
            return concatAlt(str1,str2,res,false,id+1);

        }else{
            return res;
        }
    }
    if(flag)
    {
        res = res + str1[id];
        return concatAlt(str1,str2,res,!flag,id);
    }else{
        res = res + str2[id];
        return concatAlt(str1,str2,res,!flag,id+1);

    }
}

int main()
{
    string str1 = "abet",str2 = "po";
    string result;
    concatAlt(str1,str2,result);
    cout << result;

}