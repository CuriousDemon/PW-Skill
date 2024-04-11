// Q5 - Write a program to print the cross pattern given below (in the shape of X):

#include <iostream>
using namespace std;

int main()
{
    //Declare varibles
    int num;
    //Take input here
    cin >> num;
    //print pattern
    for (int i = 1; i <= 2*num - 1; i++)
    {
        for (int j = 1; j <= 2*num - 1; j++)
        {
            if(i == j || i+j == 2*num) cout << "*";
            else cout << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}