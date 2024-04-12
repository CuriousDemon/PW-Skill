// Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.


#include <iostream>
using namespace std;

int main()
{
    //Declare a varible
    int array[] = {2,3,7,9,5,4,5};
    int oddCount = 0,evenCount = 0;
    //Count numbers in array
    for(int ele : array)
    {
        if(ele%2 == 0) evenCount++;
        else oddCount++;
    }
    //Dispaly count
    cout << "Odd numbers = " << oddCount << endl;
    cout << "Even numbers = " << evenCount << endl;
    return 0;
}