#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using std::string;
#include <iostream>
using std::ostream;

struct Product {
    double price;
    int id, quantity;
    string name;

    Product(int in_id, string in_name, int in_quantity, double in_price) { id = in_id; name = in_name; quantity = in_quantity; price = in_price; };
    int get_id() { return id; };
    int get_quantity() { return quantity; };
    double get_price() { return price; };
    string get_name() { return name; };
};

#endif