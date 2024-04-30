#include <iostream>
using namespace std;

int main()
{
    // Declare varible here
    int n = 3;
    int arr[n] = {1,2,3};
    int i = 0, j, k, x = 5, count = 0, sum;

    // find triplets
    while (i < n)
    {
        j = i+1;
        k = j+1;
        if((j+1) == n) break;
        while (j < n)
        {
            
            if(k == n)
            {
                j++;
                k = j+1;
            }
            if((j+1) == n) break;
            sum = arr[i] + arr[j] + arr[k];
            if(sum == x)
            {
                count++;
                i++;
                j++;
                k = j;
            }
            k++;
            
        }
        i++;
    }

    // print output
    cout << count << endl;

    return 0;
}