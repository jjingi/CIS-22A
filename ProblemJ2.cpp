/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment J
ProblemJ2
Get numbers from user and print it
*/
#include <iostream>

using namespace std;

vector<double> input();

void output(vector<double> printVector);

int main()
{
    vector<double> userData;

    cout << "First test" << endl;
    userData = input();
    output(userData);

    cout << "Second test" << endl;
    userData = input();
    output(userData);

    return 0;
}

/******************************
Function: ask how many numbers user wants to input and get numbers
Parameter: none
return: double type vector
*******************************/
vector<double> input()
{
    vector<double> userInput;
    int count;
    double number;

    cout << "How many numbers you want to enter: ";
    cin >> count;

    cout << "Input numbers: ";
    for (int i = 0; i < count; ++i)
    {
        cin >> number;
        userInput.push_back(number); 
    }

    return userInput;
}

/******************************
Function: get vector from main function and print it
Parameter: double type vector
return: none
*******************************/
void output(vector<double> printVector)
{
    for (int i = 0; i < printVector.size(); ++i)
    {
        cout << printVector[i] << "  ";
    }
    cout << endl;
}

/*
Execution results:
First test
How many numbers you want to enter: 3
Input numbers: 1.1 2.2 3.3
1.1  2.2  3.3  
Second test
How many numbers you want to enter: 5
Input numbers: 5.1 6.1 7.1 8.1 9.1
5.1  6.1  7.1  8.1  9.1  
*/