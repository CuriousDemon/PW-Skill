#include <iostream>
using namespace std;

int main()
{
    //Declare the variable
    int n = 5;
    int arr[n] = {5,6,7,8,9};
    int x = 4,f,flag = 0,i = 0,k,l,mid;
    // find absolute difference
    while (i < n)
    {
        f = (x+arr[i]);
        // f = f<0 ? f*(-1) : f;
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