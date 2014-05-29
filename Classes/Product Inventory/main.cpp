#include "product.h"
#include "inventory.h"
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
    
    Product a(525,"chair",7,24.99);
    Product b(124,"table",3,186.49);
    Product c(3,"pencil",50,1.00);
    Product d(776,"box",23,0.99);
    Product e(243,"microwave",2,199.99);

    Inventory inv;
    inv.add(a);
    inv.add(b);
    inv.add(c);
    inv.add(d);
    inv.add(e);

    cout << inv << endl;
    inv.remove(3);
    inv.remove(124);
    cout << endl;
    cout << inv << endl;

    inv.show_product(525);
    cout << endl;
    inv.show_product(243);
    cout << endl;

    cout << "Total price: $" << inv.sum_price() << endl;

    return 0;
}