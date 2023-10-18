/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment D
ProblemD1
Get number of beds and output the cost for each beds and total cost
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double COST_OF_SMALLBEAD = 9.20;
    const double COST_OF_MEDIUMBEAD = 8.52;
    const double COST_OF_LARGEBEAD = 7.98;

    int numberOfSmallbead;
    int numberOfMediumbead;
    int numberOfLargebead;

    cout << "How many boxes of small bead: ";
    cin >> numberOfSmallbead;

    cout << "How many boxes of medium bead: ";
    cin >> numberOfMediumbead;

    cout << "How many boxes of large bead: ";
    cin >> numberOfLargebead;

    double totalSmallBead = numberOfSmallbead * COST_OF_SMALLBEAD;
    double totalMediumBead = numberOfMediumbead * COST_OF_MEDIUMBEAD;
    double totalLargeBead = numberOfLargebead * COST_OF_LARGEBEAD;
    double totalCost = totalSmallBead + totalMediumBead + totalLargeBead;


    cout << fixed << setprecision(2);
    cout << setw(6) << left <<"SIZE" << setw(13) << right << "BOXES" << setw(21) << right << "COST PER BOX" << setw(8) << right << "TOTALS" << endl;
    cout << setw(6) << left <<"Small" << setw(13) << right << numberOfSmallbead << setw(21) << right << COST_OF_SMALLBEAD << setw(8) << right << totalSmallBead << endl;
    cout << setw(6) << left <<"Medium" << setw(13) << right << numberOfMediumbead << setw(21) << right << COST_OF_MEDIUMBEAD << setw(8) << right << totalMediumBead << endl;
    cout << setw(6) << left <<"Large" << setw(13) << right << numberOfLargebead << setw(21) << right << COST_OF_LARGEBEAD << setw(8) << right << totalLargeBead << endl;
    cout << setw(6) << left <<"TOTAL" << setw(13) << right << "" << setw(21) << right << "" << setw(8) << right << totalCost << endl;

    return 0;
}
/*
Execution result:
How many boxes of small bead: 9
How many boxes of medium bead: 8
How many boxes of large bead: 7
SIZE          BOXES         COST PER BOX  TOTALS
Small             9                 9.20   82.80
Medium            8                 8.52   68.16
Large             7                 7.98   55.86
*/