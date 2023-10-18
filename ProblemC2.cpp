/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment C
ProblemC2
get random number and output it's square root
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    double rand_number1;
    double rand_number2;
    double rand_number3; 
    double rand_number1sqrt;
    double rand_number2sqrt;
    double rand_number3sqrt;

    srand(time(NULL));
    
    rand_number1 = rand() % 10; // make random number between 0 ~ 9
    rand_number1sqrt = sqrt(rand_number1);
    cout << "random number: " << rand_number1 << " square root of random number: " << rand_number1sqrt << endl;

    rand_number2 = rand() % 10; // make random number between 0 ~ 9
    rand_number2sqrt = sqrt(rand_number2);
    cout << "random number: " << rand_number2 << " square root of random number: " << rand_number2sqrt << endl;

    rand_number3 = rand() % 10; // make random number between 0 ~ 9
    rand_number3sqrt = sqrt(rand_number3);
    cout << "random number: " << rand_number3 << " square root of random number: " << rand_number3sqrt << endl;

    return 0;
}

/*
execution result:
random number: 9 square root of random number: 3
random number: 7 square root of random number: 2.64575
random number: 4 square root of random number: 2
*/