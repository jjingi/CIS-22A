/*  Jingi Min
    CIS 22A Fall 2023
    Laboratory Assignment A
    Problem A1

    This program reads two numbers from the
    keyboard and prints their product.
*/

#include <iostream>

using namespace std;

int main()
{
    double decimal;
    int integeral;
    double product;

    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Enter a integeral number: ";
    cin >> integeral;

    product = decimal * integeral;

    cout << decimal << " * " << integeral << " = " << product << endl;

    int temp;
    cout << "Enter an integer to close the output window: ";
    cin >> temp;

    return 0;
}

/*
input : 3.14159 and 2
Execution result: 6.28318
*/