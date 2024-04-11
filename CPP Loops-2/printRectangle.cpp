// Q10- Write a C++ program to print a rectangle out of *


#include <iostream>
using namespace std;

int main()
{
    //Declare varible
    int row,col;
    //Take input here
    cout << "Please Enter the number of StarRows : ";
    cin >> row;
    cout << "Please Enter the number of StarColumns : ";
    cin >> col;
    //print rectangle
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
    return 0;
}