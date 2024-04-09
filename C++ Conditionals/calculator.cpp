// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include <iostream>
using namespace std;

int main()
{
    //Declare variable here
    char op;
    int a,b;
    //Take input here
    cout << "Enter an operator (+, -, *, /) :";
    cin >> op;
    cout << "Enter two numbers :" << endl;
    cin >>  a >> b;
    //Make calculator
    switch (op)
    {
    case '+':
        cout << a <<" + " << b << " = " << a+b << endl;
        break;
    case '-':
        cout << a <<" - " << b << " = " << a-b << endl;
        break;
    case '*':
        cout << a <<" * " << b << " = " << a*b << endl;
        break;
    case '/':
        cout << a <<" / " << b << " = " << a/b << endl;
        break;
    
    default:
        cout << "Wrong input " << endl;
        break;
    }

    return 0;
}