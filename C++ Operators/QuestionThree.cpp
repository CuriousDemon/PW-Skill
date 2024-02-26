// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades"A".
#include <iostream>
using namespace std;

int main(){
    int b,g,Total;
    b = 17;
    Total = (80*45)/100;        //total number of student get grade A
    g = Total - b;              //number of student get grade A
    cout<<g<<endl;

    return 0;
}
























