/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment I
ProblemI1
get three numbers, calculate sum and output the output the format
*/
#include <iostream>

using namespace std;

int getData();

int computeTotal(int inputNum1, int inputNum2, int inputNum3);

void printAll(int firstNum, int secondNum, int thirdNum, int numTotal);

int main()
{
    int first, second, third, total;

    cout << "First integer -> ";
    first = getData();

    cout << "Second integer -> ";
    second = getData();

    cout << "Third integer -> ";
    third = getData();

    total = computeTotal(first, second, third);

    printAll(first, second, third, total);

    return 0;
}

/**************************
Function purpose: get one integer from the user and return it
parameter: no parameter
return: return integer got from the user
**************************/
int getData()
{
    int inputNum;

    cout << "Enter one integer: ";
    cin >> inputNum;

    return inputNum;
}

/***************************
Function purpose: sum three integers and return the value
parameter: inputNum1, inputNum2, inputNum3
return: inputSum
*****************************/
int computeTotal(int inputNum1, int inputNum2, int inputNum3)
{
    int inputSum;

    inputSum = inputNum1 + inputNum2 + inputNum3;

    return inputSum;
}

/***************************
Function purpose: print the values in format
parameter: firstNum, secondNum, thirdNum, total
return: none
*****************************/
void printAll(int firstNum, int secondNum, int thirdNum, int numTotal)
{
    cout << firstNum << " + " << secondNum << " + " << thirdNum << " = " << numTotal << endl;
}