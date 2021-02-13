#include <iostream>
using namespace std;

bool performOperation(double n1, double n2, char operation);

int main()
{
    double num1, num2;
    char operation;
    bool executed;
    do {        
    cout << "First number: " << endl;
    cin >> num1;
    cout << "Second number: " << endl;
    cin >> num2;
    cout << "Multiply (*), Dividw (/), Add (+), Subtract(-): " << endl;
    cin >> operation;
    executed = performOperation(num1, num2, operation);
    }   
    while (executed == false);
    return 0;
}

bool performOperation(double n1, double n2, char op) {
    bool executed = true;
    switch(op) {
        case '*':
        cout << "Multiply " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 * n2 << endl;
        break;
        case '/':
        cout << "Divide " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 / n2 << endl;
        break;
        case '+':
        cout << "Add " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 + n2 << endl;
        break;
        case '-':
        cout << "Subtract " <<  n1 << " and " << n2 << endl;
        cout << "The answer is: " << n1 - n2 << endl;
        break;
        default:
        executed = false;
        cout << "Incorrect operation" << endl;
        break;
    }
    return executed;
}