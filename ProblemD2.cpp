/*
Jingi Min
CIS 22A 2023 Fall
Laboratory Assignment D
ProblemD2
Get mass and velocity from the keyboard and calculate momentum and kinetic energy
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double velocity;
    double mass;
    double momentum;
    double kineticEnergy;

    cout << "input mass: ";
    cin >> mass;
    cout << "input velocity: ";
    cin >> velocity;

    momentum = mass * velocity;
    kineticEnergy = (mass * (velocity * velocity)) / 2;

    cout << fixed << setprecision(2);
    cout << setw(17) << left << "mass: " << setw(6) << right << mass << " kg" << endl;
    cout << setw(17) << left << "velocity: " << setw(6) << right << velocity << " m/s" << endl;
    cout << setw(17) << left << "momentum: " << setw(6) << right << momentum << " kg · m/s" << endl;
    cout << setw(17) << left << "kinetic energy: " << setw(6) << right << kineticEnergy << " J" << endl;

    return 0;
}

/*
Execution results:
input mass: 5.0
input velocity: 4.0
mass:              5.00 kg
velocity:          4.00 m/s
momentum:         20.00 kg · m/s
kinetic energy:   40.00 J

input mass: 3.15
input velocity: 10.0
mass:              3.15 kg
velocity:         10.00 m/s
momentum:         31.50 kg · m/s
kinetic energy:  157.50 J
*/