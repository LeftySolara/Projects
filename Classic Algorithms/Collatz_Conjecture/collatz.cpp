/*
Collatz Conjecture:
    Start with a number n > 1. Find the number of steps it takes to
    reach one using the following process:
    If n is even, divide it by 2. If n is odd, multiply it by 3 and add 1
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
    int n, count = 0;
    cout << "Enter a number greater than one: ";
    cin >> n;

    while (n != 1) {
        cout << n << endl;
        if (n % 2 == 0) {
            n /= 2;
            ++count;
        }
        else if (n % 2 > 0) {
            n *= 3;
            ++n;
            ++count; 
        }
    }

    cout << n << endl;
    cout << "\nSteps taken: " << count << endl;

    return 0;
}