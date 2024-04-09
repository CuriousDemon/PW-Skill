// Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int mar;
    //Take input here
    cout << "Enter Your Marks :" ;
    cin >> mar;
    //print grade
    switch (mar)
    {
    case 90 ... 100:
        cout << "Your Grade is A+" << endl;
        break;
    case 80 ... 89:
        cout << "Your Grade is A" << endl;
        break;
    case 70 ... 79:
        cout << "Your Grade is B+" << endl;
        break;
    case 60 ... 69:
        cout << "Your Grade is B" << endl;
        break;
    case 50 ... 59:
        cout << "Your Grade is C" << endl;
        break;
    case 40 ... 49:
        cout << "Your Grade is D" << endl;
        break;
    case 30 ... 39:
        cout << "Your Grade is E" << endl;
        break;
    case 0 ... 29:
        cout << "Your Grade is F" << endl;
        break;
    
    default:
        cout << "Wrong input " << endl;
        break;
    }

    return 0;
}