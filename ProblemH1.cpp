/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment H
ProblemH1
get a array and find the number from array
*/

#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 5; // array size
    int array[ARRAY_SIZE];
    int result = -1, target; // result: offset where the target found, target: target number to find offset
    unsigned int i;

    cout << "Enter the target number: ";
    cin >> target;

    // get value to array
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        cout << "enter the next value: ";
        cin >> array[i];
    }

    // find target number in array and offset
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        if (array[i] == target)
        {
            result = i;
            break;
        }
    }

    if (result == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at offset " << result << endl;
    }

    return 0;
}

/*
Execution results:
Enter the target number: 5
enter the next value: 1
enter the next value: 3
enter the next value: 3
enter the next value: 6
enter the next value: 7
target not found

Enter the target number: 5
enter the next value: 1
enter the next value: 2
enter the next value: 3
enter the next value: 5
enter the next value: 9
target found at offset 3
*/