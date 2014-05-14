#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	long sz;
	cout << "Enter size of Fibonacci sequence: ";
	cin >> sz;
	long fibs[sz+1] = {0,1};

	for (long i = 2; i <= sz; i++) {
		fibs[i] = fibs[i-1] + fibs[i-2];
	}
	cout << "Fibonacci sequence to n = " << sz << ':' << endl;
	for (long n = 0; n <= sz; n++) {
		cout << fibs[n] << " ";
	}
	cout << endl;

	return 0;
}