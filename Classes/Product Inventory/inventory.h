#include "product.h"
#include <vector>
using std::vector;

class Inventory {
    private:
        vector<Product> _products;
    public:
        Inventory();
        void add(Product p) { _products.push_back(p); };
        void remove(int id);
        double sum_price();
        void show_product(int id);
        friend ostream &operator<<(ostream &out, Inventory &inv);
};