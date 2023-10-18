/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment D
ProblemD3
get a name with keyboard by using getline and print the name
*/

#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter the name: ";
    getline(cin, name);

    cout << "The name is " << name << endl;

    return 0;
}

/*
Execution results:
Enter the name: George Washington 
The name is George Washington 

Enter the name: Franklin Delano Roosevelt
The name is Franklin Delano Roosevelt
*/