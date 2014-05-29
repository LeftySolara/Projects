#include "inventory.h"
#include <iomanip>
using std::setw;
#include <iostream>
using std::left; using std::right; using std::internal; using std::cout; using std::endl;

Inventory::Inventory() {}

void Inventory::remove(int i) {
    int cnt = 0;
    for (Product p : _products) {
        if (p.id == i) {
            break;
        }
        else {
            ++cnt;
        }
    }
    _products.erase(_products.begin() + cnt);
}

void Inventory::show_product(int id) {
    for (Product p : _products) {
        if (p.id == id) {
            cout << "ID: " << p.get_id() << endl;
            cout << "Name: " << p.get_name() << endl;
            cout << "Quantity: " << p.get_quantity() << endl;
            cout << "Price: $" << p.get_price() << endl;
        }
    }
}

double Inventory::sum_price() {
    double total = 0.00;
    for (Product p : _products) {
        total += p.price;
    }
    return total;
}

ostream &operator<<(ostream &out, Inventory &inv) {
    out << "  ID      Name      Quantity     Price" << '\n';
    for (Product p : inv._products) {
        out << setw(5) << internal << p.get_id() << "   " << setw(12) << left
        << p.get_name() << setw(5) << right << p.get_quantity() << setw(8) 
        << " $" << p.get_price() << '\n';
    }
    return out;
}