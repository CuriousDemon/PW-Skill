// Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.


#include <iostream>
using namespace std;

//Declare prototype of function
void areaAndCircumference ( int r);

int main()
{
    //Declare variable
    int n,res;
    //Take input here
    cout << "r = ";
    cin >> n;
    //cal function
    areaAndCircumference(n);
    return 0;
}

//Define area function
void areaAndCircumference (int r)
{
    cout << "Area : " << 3.14 * r * r <<endl;
    cout << "Circumference : " << 2 * 3.14 * r <<endl;
}