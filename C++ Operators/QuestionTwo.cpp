// Write a program to take the values of two variables a and b from the keyboard and then check if
// both the conditions 'a < 50' and 'a < b' are true.

#include <iostream>
using namespace std;

int main ()
{
    // Declare the variable here
    int a,b;
    cin>>a;
    cin>>b;
    //  Write the condition here
    if (a<50 && a<b)
    {
        cout<<"0"<<endl;
    }else{
        cout<<"1"<<endl;
    }
    
    return 0;
}




















