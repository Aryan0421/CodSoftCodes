#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char symbol;

    cout << "Welcome to my Calculator: " << endl;
    cout << "-------" << endl;

    cout << "Enter symbol : " << endl;
    cin >> symbol;

    cout << "Enter two numbers: " << endl;
    cin >> a>>b;
    //cin >> b;

    switch (symbol)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;

    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;

    default:

        cout << "Symbol doesn't exist" << endl;
        break;
    }

    cout << endl;
     cout << endl;

    return 0;
}
