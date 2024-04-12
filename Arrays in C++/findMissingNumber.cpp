// Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.


#include <iostream>
using namespace std;
//Declare prototype
int findNum (int arr[6],int size);

int main()
{
    //Declare array
    int n = 6;
    int arr[n] = {1,2,3,4,5,7};
    int missNum;
    //Call function
    missNum = findNum(arr,n);
    //Display output
    cout << missNum << endl;
    return 0;
}
//Define function
int findNum(int arr[], int size)
{
    int key = __INT_MAX__,miss = 1;
    for (int i = 0; i < size; i++)
    {
        if(key > arr[i]) key = arr[i];
    }

    for(int i = 0; i < size ;i++)
    {
        miss = 1;
        for (int j = 0; j < size; j++)
        {
            if(key == arr[j])
            {
                miss = 0;
                key++;
                break;
            }
        }
        if(miss) break;
        
    }
    return key;

}