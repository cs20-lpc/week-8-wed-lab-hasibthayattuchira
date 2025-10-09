#include "ArrayStack.hpp"
#include <iostream>

using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

double gRec(unsigned);
double gStack(unsigned);

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls two functions in two different ways:
 * recursive and iterative. The outputs for both function calls should match
 * exactly.
 * 
 * Input:
 * N/A
 * 
 * Output:
 * An integer to signal to the OS the exit code.
*******************************************************************************/

int main() {
    unsigned startValue = 0;

    cout << "Enter the starting value for i: ";
    cin  >> startValue;

    cout << "\nRecursive:\n";
    cout << gRec(startValue) << endl;

    cout << "\nIterative:\n";
    cout << gStack(startValue) << endl;

    return 0;
}

/*******************************************************************************
 * Description:
 * Recursive function that calculates a result. Displays a message when a base
 * case is reached.
 * 
 * Input:
 * i - an unsigned value that determines whether or not this is a base case
 * 
 * Output:
 * The result of 1.1n + 3.2, where n is the depth of recursion
*******************************************************************************/

double gRec(unsigned i) {
    if (i == 0) {
        cout << "Base case!\n";
        return 3.2;
    }
    
    return gRec(i - 1) + 1.1;
}

/*******************************************************************************
 * Description:
 * Iterative function that simulates recursion using a stack. Calculates a
 * result. Displays a message when a base case is reached.
 * 
 * Input:
 * i - an unsigned value that determines whether or not this is a base case
 * 
 * Output:
 * The result of 1.1n + 3.2, where n is the depth of recursion
*******************************************************************************/

double gStack(unsigned i) {
    // TODO
    ArrayStack<unsigned> callStack;
    while(i > 0){ // should push recursive calls into the stack
        callStack.push(i);
        i--;
    }
    cout << "Base Case!" << endl;
    double result = 3.2;

    while(!callStack.isEmpty()){ // should pop the stack and calculate result
        callStack.pop();
        result += 1.1;
    }

    return result;
}
