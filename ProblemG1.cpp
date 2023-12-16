/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment G
ProblemG1
open the file, get a integers and find sum, smallest, largest and average of integers
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream integerFile;

    int num, intCount = 0, sumInt = 0, smallest, biggest, avg = 0;

    intCount = 0, sumInt = 0, avg = 0;
    integerFile.open("file1.txt");

    if (!integerFile.is_open())
    {
        cout << "Could not open the file file1.txt" << endl;
        return 1;
    }

    integerFile >> num;
    biggest = num, smallest = num;
    while (!integerFile.fail())
    {
        intCount++;
        sumInt += num;
        if (num < smallest)
        {
            smallest = num;
        }
        else if (num > biggest)
        {
            biggest = num;
        }
        integerFile >> num;
    }
    cout << "The integer count: " << intCount << endl;
    cout << "The sum of the integers: " << sumInt << endl;
    cout << "The smallest integer: " << smallest << endl;
    cout << "The largest integer: " << biggest << endl;
    cout << "The average of the integers: " << static_cast<double>(sumInt) / intCount << endl;

    integerFile.close();

    return 0;
}

/*
Execution results:
The integer count: 7
The sum of the integers: 141
The smallest integer: 9
The largest integer: 33
The average of the integers: 20.1429

The integer count: 8
The sum of the integers: 181
The smallest integer: 9
The largest integer: 40
The average of the integers: 22.625
*/