/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment F
ProblemF2
Get two integers and print sqrt of numbers between first number and second number
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two integers (both integers should be between 1 to 20 and second integer should be bigger than first integer): ";
    cin >> num1 >> num2;

    while ((num1 > num2) || (num1 < 1 || num1 > 20) || (num2 < 1 || num2 > 20))
    {
        if (num1 > num2)
        {
            cout << "The second integer should be bigger than the first integer. Please enter again: ";
        }
        else if (num1 < 1 || num1 > 20 || num2 < 1 || num2 > 20)
        {
            cout << "Both integers should be between 1 to 20. Please enter again: ";
        }
        cin >> num1 >> num2;
    }

    cout << right << setw(7) << "INTEGER" << right << setw(13) << "SQUARE ROOT" << endl;
    cout << fixed << setprecision(4);

    for (int i = num1; i <= num2; ++i)
    {
        cout << right << setw(7) << i << right << setw(13) << sqrt(i) << endl;
    }
}
/*
Execution results:
Enter two integers (both integers should be between 1 to 20 and second integer should be bigger than first integer): 2 0
The second integer should be bigger than the first integer. Please enter again: 2 4
INTEGER  SQUARE ROOT
      2       1.4142
      3       1.7321
      4       2.0000
Enter two integers (both integers should be between 1 to 20 and second integer should be bigger than first integer): 21 5
The second integer should be bigger than the first integer. Please enter again: 5 5
INTEGER  SQUARE ROOT
      5       2.2361
*/