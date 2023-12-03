#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, my name is Landon and I'm going to solve the equation" << endl;
    cout << "Ax + B = 0" << endl;
    cout << "for X" << endl;
    cout << endl;

    float A, B, X;

    // Provide initial values for A and B
    A = -5;
    B = 7;

    // Display the provided values
    cout << "Please enter a value for A: " << A << endl;
    cout << "Please enter a value for B: " << B << endl;
    cout << endl;

    // Display the equation with input values
    cout << "Solving ";
    cout << A << "x + " << B << " = 0";
    cout << " for x..."<< endl;
    cout << endl;

    // Calculate the solution for x
    
    if (A == 0) {
        if (B == 0) {
            cout << "Infinite solutions (any x is a solution)" << endl;
        }
        else {
            cout << "No solution (contradiction)" << endl;
        }
    }
    else {
        X = -B / A;
        cout << "The answer is X=:" << endl  << X << endl;
    }

    return 0;
}