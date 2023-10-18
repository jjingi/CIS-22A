/*  Jingi Min
    CIS 22A Fall 2023   
    Assignment B 
    Problem B2
    declare a, b and c and do simple caculation and output result of c
*/
#include <iostream>

using namespace std;

int main () 
{
int a = 4 ; // declare a
int b = 2;  // declare b
int c = 2; // declare c

c += b; 
c = b + (a * c);

cout <<  "result: " << c << endl; // output number c

return 0;
}


/* Execution Result:
result: 18

*/
