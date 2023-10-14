#include <iostream>
using namespace std;

void sum(int num1, int num2)
{
    cout << "Summation: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

void sub(int num1, int num2)
{
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}

void multi(int num1, int num2)
{
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}

void div(int num1, int num2)
{
    cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
}

int main()
{
    int op;

    cout << "For Summation, press 1" << endl;
    cout << "For Subtraction, press 2" << endl;
    cout << "For Multiplication, press 3" << endl;
    cout << "For Division, press 4" << endl;
    cout << "Select the operator:" << endl;
    cin >> op;
    cout<<endl;
    int num1, num2;
    if (op == 1)
    {
        cout << "Enter the 1st number: ";
        cin >> num1;
        cout << "Enter the 2nd number: ";
        cin >> num2;
        sum(num1, num2);
    }
    else if (op == 2)
    {
        cout << "Enter the 1st number: ";
        cin >> num1;
        cout << "Enter the 2nd number: ";
        cin >> num2;
        sub(num1, num2);
    }

    else if (op == 3)
    {
        cout << "Enter the 1st number: ";
        cin >> num1;
        cout << "Enter the 2nd number: ";
        cin >> num2;
        multi(num1, num2);
    }
    else if (op == 4)
    {
        cout << "Enter the 1st number: ";
        cin >> num1;
        cout << "Enter the 2nd number: ";
        cin >> num2;
        div(num1, num2);
    }

    return 0;
}

