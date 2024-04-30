#include <iostream>
using namespace std;

int main()
{
    //Declare an array
    int n = 6;
    int iarray[n] = {-4,-3,-1,0,2,10};
    int oarr[n],temp;
    //sort array
    for (int i = 0; i < n; i++)
    {
        oarr[i] = iarray[i]*iarray[i];
    }
    int i = 0;
    while (i < n)
    {
        for (int j = i+1; j < n; j++)
        {
            if (oarr[i] > oarr[j])
            {
                temp = oarr[i];
                oarr[i] = oarr[j];
                oarr[j] = temp;
                
            }
            
        }
        
        
        i++;
    }
    //print sort array
    for (int j = 0; j < n; j++)
    {
        cout << oarr[j] <<", ";
    }
    cout << endl;

    
    
    return 0;
}