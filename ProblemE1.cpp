/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment E
ProblemE1
get various values of a,b and c and find solution of equation
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double x; // solution
    double determinant;

    cout << "Input value of a, b and c of equation  ax2 + bx + c: ";
    cin >> a >> b >> c;
    if (a == 0)
    {
        if ((b == 0) && (c == 0))
        {
            cout << "Any value of x is a solution." << endl;
        }
        else if ((b == 0) && !(c == 0))
        {
            cout << "No solution exists." << endl;
        }
        else if (!(b == 0))
        {
            x = -c / b;
            cout << "Solution: " << x << endl;
        }
    }
    else
    {
        determinant = pow(b, 2) - (4 * a * c);
        if(determinant == 0){
            x = (-b) / (2 * a);
            cout << "Solution: " << x;
        }
        else if(determinant > 0){
            x = (-b + sqrt(determinant)) / (2 * a);
            cout << "Solution x1: " << x << endl;
            x = (-b - sqrt(determinant)) / (2 * a);
            cout << "Solution X2: " << x << endl;
        }
        else if(determinant < 0){
            cout << "The solution have an imaginary component." << endl;
        }
    }
    return 0;
}

/*
Execution results:
Input value of a, b and c of equation  ax2 + bx + c: 0 0 0
Any value of x is a solution.

Input value of a, b and c of equation  ax2 + bx + c: 0 0 4
No solution exists.

Input value of a, b and c of equation  ax2 + bx + c: 0 8 -12
Solution: 1.5

Input value of a, b and c of equation  ax2 + bx + c: 2 4 2
Solution: -1

Input value of a, b and c of equation  ax2 + bx + c: 2 2 0
Solution x1: 0
Solution X2: -1

Input value of a, b and c of equation  ax2 + bx + c: 100 100 -11
Solution x1: 0.1
Solution X2: -1.1

Input value of a, b and c of equation  ax2 + bx + c: 1 1 1
The solution have an imaginary component.
*/