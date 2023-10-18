/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment C
ProblemC1
get Celsius from keyboard and change to Fahrenheit
print Celsius and Fehrenheit
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{  
    const double TIMES_CELSIUS = ( 9.0 / 5.0 );
    const double PLUS_CELSIUS = 32;
    double celsius; // celsius degree
    double fahrenheit; // fahrenheit degree
    
    cin >> celsius;
    
    fahrenheit = (celsius * TIMES_CELSIUS) + PLUS_CELSIUS; // change celsius degree to fahrenheit degree

    cout << fixed << setprecision(1) << "Celsius: " << celsius << endl;
    cout << "fahrenheit: " << fahrenheit << endl;

    return 0;
}

/*
Execution result:
input celsius degree: 37.778
Celsius: 37.8
fahrenheit: 100.0

input celsius degree: -40
Celsius: -40.0
fahrenheit: -40.0

input celsius degree: 0
Celsius: 0.0
fahrenheit: 32.0
*/