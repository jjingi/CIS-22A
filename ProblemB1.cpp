/*  Jingi Min
    CIS 22A Fall 2023
    Laboratory Assignment B
    Problem B1

    This program count number of dogs and cats
    and put sum of cats and dogs to animals
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cats; // declare cats
    int dogs; // declare dogs
    int animals; // declare animals

    cout << "enter the value of cats: "; 
    cin >> cats; // read number of cats
    cout << "enter the value of dogs: ";
    cin >> dogs; // read number of dogs

    animals = cats + dogs; // sum of cats and dogs

    cout << left << setw(9) << "cats:    " << right << cats    << endl;
    cout << left << setw(9) << "dogs:    " << right << dogs    << endl;
    cout << left << setw(9) << "animals: " << right << animals << endl;

    return 0;
}
/*
execution result:
enter the value of cats: 4
enter the value of dogs: 4
cats:    4
dogs:    4
animals: 8
*/