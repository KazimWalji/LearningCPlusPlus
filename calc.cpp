#include <iostream>
using namespace std;

void performOperation(double n1, double n2, char operation);

int main()
{
    double num1, num2;
    char operation;
    cout << "First number: " << endl;
    cin >> num1;
    cout << "Second number: " << endl;
    cin >> num2;
    cout << "Multiply (*), Dividw (/), Add (+), Subtract(-): " << endl;
    cin >> operation;
    performOperation(num1, num2, operation);
    return 0;
}

void performOperation(double n1, double n2, char op) {
     if (op == '*') {
        cout << "Multiply " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 * n2 << endl;
    } else if (op == '-') {
        cout << "Subtract " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 - n2 << endl;
    } else if (op == '/') {
        cout << "Divide " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 / n2 << endl;
    } else if (op == '+') {
        cout << "Add " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 + n2 << endl;

    } else {
        cout << "Incorrect operation" << endl;
    }
}