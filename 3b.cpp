#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int add(int a, int b = 10)
{
    return a + b;
}

int calculate(int a, int b)
{
    return a + b;
}

double calculate(double a, double b)
{
    return a * b;
}

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Square of first number: " << square(a) << endl;

    cout << "Addition using default argument: " << add(a) << endl;

    cout << "Addition using two arguments: " << add(a, b) << endl;

    cout << "Addition of integers: " << calculate(a, b) << endl;

    cout << "Multiplication of decimal numbers: "
         << calculate(2.5, 3.0) << endl;

    return 0;
}