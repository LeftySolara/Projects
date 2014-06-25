// Floor Cost
// Calculate the total cost of tile it would take to cover a floor plan of width and height, using a cost entered by the user

#include <iostream>
using std::cout; using std::cin; using std::endl;

int main() {
	double width, length, area, unit_cost, total_cost;

	cout << "How wide is the floor (ft)? ";
	cin >> width;
	cout << "How long is the flood (ft)? ";
	cin >> length;
	cout << "How much per square foot? ";
	cin >> unit_cost;

	area = width * length;
	total_cost = area * unit_cost;

	cout << "The total cost of the floor is $" << total_cost << endl;
}