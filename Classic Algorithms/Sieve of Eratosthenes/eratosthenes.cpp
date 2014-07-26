// Sieve of Eratosthenes
// Finds all prime numbers up to a given value by marking all multiples of smaller primes

#include <cmath>
#include <map>
using std::map;
#include <iostream>
using std::cin; using std::cout; using std::endl;


int main() {
    int limit;
    cout << "Enter a limit: ";
    cin >> limit;

    // create map of consecutive integers, none initially marked as composite
    map<int,bool> int_map;
    for (int i = 2; i <= limit; ++i) {
        int_map[i] = false;
    }

    int p = 2;  // prime number being checked

    while (p < limit) {
        // enumerate multiples of p (up to limit) and mark as composite
        for (int factor = 2; factor < limit; ++factor) {
            int_map[p * factor] = true;
        }
    
        // set p equal to next unmarked (prime) number
        do {
            ++p;
        } while (int_map[p]);
    }

    cout << "Prime numbers between 2 and " << limit << ':' << endl;
    for (int i = 2; i <= limit; ++i) {
        if (!int_map[i]) {
            cout << i << ' ';
        }
    }
    cout << endl;

    return 0;
}