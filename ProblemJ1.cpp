/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment J
ProblemJ1
Find the index of the target number
*/
#include <iostream>

using namespace std;

int main()
{
    vector<int> vector;

    vector = {2, 3, 5, 8, 13, 21, 34};

    int result, target;

    cout << "Input target you want to find: ";
    cin >> target;

    result = -1;

    for (int i = 0; i < vector.size(); ++i)
    {
        if (vector[i] == target)
        {
            result = i;
        }
    }

    if (result >= 0)
    {
        cout << "Target is at index " << result << endl;
    }
    else if (result == -1)
    {
        cout << "Can't find the target" << endl;
    }
    return 0;
}

/*
Execution results
Input target you want to find: 5
Target is at index 2
Input target you want to find: 7
Can't find the target
*/