/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment H
ProblemH1
get two doubles until they're not same
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double first, second;

    do
    {
        cout << "enter two doubles: ";
        cin >> first >> second;

    } while (fabs(first - second) < 0.0001);

    return 0;
}

/*
Execution results:
enter two doubles: 3.1 3.1
enter two doubles: 5.7 5.7
enter two doubles: 7.2 7.8
*/