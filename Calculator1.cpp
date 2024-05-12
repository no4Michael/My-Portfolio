#include <iostream>
using namespace std;

// This is Just Calculator On C++.

int main()
{
    float num1;
    cout << "Enter your num1: ";
    cin >> num1;

    float num2;
    cout << "Enter your num2: ";
    cin >> num2;

    char sym;
    cout << "Enter Symbol +, -, *, /: ";
    cin >> sym;

    if (sym == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (sym == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (sym == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (sym == '/') {
        cout << "Result: " << num1 / num2 << endl;
    }
}
