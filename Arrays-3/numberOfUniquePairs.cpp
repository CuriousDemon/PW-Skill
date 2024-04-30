#include <iostream>
using namespace std;

int main()
{
    //Declare the variable

    int n = 3;
    int array[n] = {2,2,2};
    int x = 4,i = 0,f,count = 0,j;

    //find pairs
    j = n-1;

    while (i < j)
    {
        if((array[i] + array[j]) == x)
        {
            count++;
            i++;
            j--;
        }else if((array[i] + array[j]) > x)
        {
            j--;
        }else if((array[i] + array[j]) < x)
        {
            i++;
        }

    }

    //print output
    cout << count << endl;
    
    return 0;
}