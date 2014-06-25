// Next Prime Number
// Finds prime numbers until user commands to stop

# include <iostream>
using std::cin; using std::cout; using std::endl;

bool is_prime(int n) {
	for (int i = 3; i <= n / 2; i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}


int find_next_prime(int& n) {
	while (!is_prime(n)) {
		n += 2;
	}

	return n;
}


int main() {
	char input = 'y';
	int n = 2;
	int next;
	bool prime;

	cout << "The first prime number is " << n << endl;
	cout << "Find the next prime (y/n)? ";
	cin >> input;

	while (input == 'y') {
		if (n == 2) {
			++n;
			cout << "The next prime is " << n << endl;
		}
		else {
			next = find_next_prime(n);
			n += 2;
			if (n != 5) { cout << "The next prime is " << next << endl; }
			cout << endl;
			cout << "Find next prime (y/n)? ";
			cin >> input;
		}
	}

	cout << "Goodbye" << endl;
}