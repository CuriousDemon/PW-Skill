// Q8 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.

#include <iostream>
using namespace std;

int main()
{
    //Declare variables;
    int num,prime = 2,flag;
    //Take input here
    cout << "Please enter the no of lines ";
    cin >> num;
    //print prime triangle
    //for rows
    for (int i = 1; i <= num; i++)
    {
        //For space in columns
        for (int s = 1; s <= num-i; s++)
        {
            cout << " ";
        }
        
        //for columns
        int j = 1;
        while(j <= i)
        {
            //Check prime number
            flag = 1;
            for (int k = 2; k <= prime/2; k++)
            {
                if(prime%k == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag) 
            {
                j++;
                cout << prime << " ";
            }
            prime++;
            
        }
        cout << endl;
    }
    

    return 0;
}