/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment F
ProblemF1
get positive numbers and output smallest number
*/

#include <iostream>
#include <climits>

using namespace std;

int main(){
    int inputNum; // variable to get number from user
    int smallest = INT_MAX; //initialize to biggest value
    int count = 0;

    cout << "enter positive integers and enter negative integer to stop: ";
    cin >> inputNum;
    while(inputNum > 0){
        if(inputNum < smallest){
            smallest = inputNum; // initialize if input number is smallest
        }
        cout << "keep entering: ";
        cin >> inputNum;
        count++;
    }
    if(count == 0){ // when ther's no input
        cout << "no input";
    }
    else{ // output the smallest number
        cout << "smallest positive value: " << smallest << endl;
    }
}

/*
Execution results:
enter positive integers and enter negative integer to stop: 65
keep entering: 21
keep entering: 12
keep entering: 99
keep entering: -1
smallest positive value: 12

enter positive integers and enter negative integer to stop: 99
keep entering: 155
keep entering: 42
keep entering: 105
keep entering: -1
smallest positive value: 42
*/
