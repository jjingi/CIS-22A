/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment G
ProblemG2
open the file, get a integers and find sum, smallest, largest and average of integers
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int menuSelect = 0, patternLength;
    int i, j;

    while(menuSelect != 5) {
        cout << "1. Square pattern \n2. Triangle pattern \n3. Diagnoal pattern \n4. Reverse diagnoal pattern \n5. Quit" << endl;
        cout << "Enter the number: ";
        cin >> menuSelect;

        if(menuSelect < 1 || menuSelect > 5) {
            cout << "Error, enter between 1 ~ 5" << endl;
            continue;
        }
        else if(menuSelect == 5) {
            break;
        }

        cout << "Enter the size: ";
        cin >> patternLength;
        if(patternLength < 1 || patternLength > 9) {
            cout << "Error, enter size between 1 ~ 9" << endl;
        }

        if(menuSelect == 1) {
            for(i = 0; i < patternLength; ++i) {
                for(j = 0; j < patternLength; ++j) {
                    cout << patternLength;
                }
                cout << endl;
             }
        }
        else if(menuSelect == 2) {
            for(i = 1; i <= patternLength; ++i) {
                for(j = 0; j < i; ++j) {
                cout << patternLength;
                }
                cout << endl;
            }
        }
        else if(menuSelect == 3) {
            for(i = 1; i <= patternLength; ++i) {
                for(j = 1; j <= patternLength; ++j) {
                    if(i == j) {
                        cout << patternLength;
                    }
                    else {
                        cout << "*";
                    }
                }
                cout << endl;
            }
        }
        else if(menuSelect == 4) {
            for(i = 0; i < patternLength; ++i) {
                for(j = 1; j <= patternLength; ++j) {
                    if(patternLength - i == j) {
                        cout << patternLength;
                    }
                    else {
                        cout << "*";
                    }
                }
                cout << endl;

            }
        }

    }

    return 0;

}

/*
1. Square pattern 
2. Triangle pattern 
3. Diagnoal pattern 
4. Reverse diagnoal pattern 
5. Quit
Enter the number: 9
Error, enter between 1 ~ 5
1. Square pattern 
2. Triangle pattern 
3. Diagnoal pattern 
4. Reverse diagnoal pattern 
5. Quit
Enter the number: 1
Enter the size: 11
Error, enter size between 1 ~ 9
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1111111111111111111111
1. Square pattern 
2. Triangle pattern 
3. Diagnoal pattern 
4. Reverse diagnoal pattern 
5. Quit
Enter the number: 1
Enter the size: 3
333
333
333
1. Square pattern 
2. Triangle pattern 
3. Diagnoal pattern 
4. Reverse diagnoal pattern 
5. Quit
Enter the number: 2
Enter the size: 4
4
44
444
4444
1. Square pattern 
2. Triangle pattern 
3. Diagnoal pattern 
4. Reverse diagnoal pattern 
5. Quit
Enter the number: 3
Enter the size: 5
5****
*5***
**5**
***5*
****5
1. Square pattern 
2. Triangle pattern 
3. Diagnoal pattern 
4. Reverse diagnoal pattern 
5. Quit
Enter the number: 4
Enter the size: 6
*****6
****6*
***6**
**6***
*6****
6*****
1. Square pattern 
2. Triangle pattern 
3. Diagnoal pattern 
4. Reverse diagnoal pattern 
5. Quit
Enter the number: 5
*/