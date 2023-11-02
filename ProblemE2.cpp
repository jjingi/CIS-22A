/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment E
ProblemE1
get various values of a,b and c and find solution of equation
*/

#include <iostream>

using namespace std;

int main(){
    int score1, score2, score3;
    int numAssignmet, totalAssignment;
    double average, percentAssignment;
    
    cout << "Enter three tests scores (out of 100): ";
    cin >> score1 >> score2 >> score3;

    average = (score1 + score2 + score3) / 3.0;

    if(average >= 90){
        cout << "Grade is A" << endl;
    }
    else if(average >= 80){
        cout << "Grade is B" << endl;
    }
    else if(average >= 70){
        cout << "Grade is C" << endl;
    }
    else if(average >= 60){
        cout << "Enter numbr of homework assignments the student turned in: ";
        cin >> numAssignmet;
        cout << "Enter total number of homework assignemnts: ";
        cin >> totalAssignment;

        percentAssignment = (static_cast<double>(numAssignmet) / (totalAssignment)) * 100;
        if(percentAssignment > 80){
            cout << "Grade is D" << endl;
        }
        else{
            cout << "Grade is F" << endl;
        }
    }    
    else{
        cout << "Grade is F" << endl;
    }

    return 0;
}
/*
Execution results
Enter three tests scores (out of 100): 96 84 90
Grade is A

Enter three tests scores (out of 100): 95 83 90
Grade is B

Enter three tests scores (out of 100): 70 59 60
Enter numbr of homework assignments the student turned in: 5
Enter total number of homework assignemnts: 6
Grade is D

Enter three tests scores (out of 100): 73 58 65
Enter numbr of homework assignments the student turned in: 8
Enter total number of homework assignemnts: 11
Grade is F
*/