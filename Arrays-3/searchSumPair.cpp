#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int n = 4;
    int arr[n] = {1,2,3,4};
    int x = 9;
    int i = 0,f,flag = 0;
    int k,l,mid;
    //Find summation pair
    while (i < n)
    {
        f = x-arr[i];
        k = 0;
        l = n;
        while (k <= l)
        {
            mid = (k+l)/2;
            if(arr[mid] == f) 
            {
                cout << "Yes" <<endl;
                flag = 1;
                break;
            }
            else if(arr[mid] < f)
            {
                k = mid+1;
            }else if(arr[mid] > f)
            {
                l = mid-1;
            }
        }
        if(flag) break;
        i++;
    }
    if(flag == 0) cout << "No" << endl;
    
    return 0;
}