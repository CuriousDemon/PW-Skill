// Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.


#include <iostream>
using namespace std;

//Declare protoytpe
void checkEligible(int age);

int main()
{
    //Declare varible
    int n;
    //take input 
    cin >> n;
    //call function
    checkEligible(n);
    return 0;
}

//Define function
void checkEligible(int age)
{
    if(age >= 18) cout << "Yes" <<endl;
    else cout << "No" << endl;
}