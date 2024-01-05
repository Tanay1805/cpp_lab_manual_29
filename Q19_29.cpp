// Write a program to simulate a simple online shop. Create a class Product with
// attributes like name, price, and quantity in stock. Implement methods for
// adding products to the shopping cart, calculating the total cost, and displaying
// the contents of the cart.

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    static const int MAX_PRODUCTS = 5;
    string prod[MAX_PRODUCTS];
    float prices[MAX_PRODUCTS];
    int quan[MAX_PRODUCTS];
    float sum;

public:
    Product() : sum(0.0) {
        cout << "Enter number of products (max " << MAX_PRODUCTS << "): ";
        int n;
        cin >> n;

        if (n > 0 && n <= MAX_PRODUCTS) {
            for (int i = 0; i < n; i++) {
                cout << "Enter name of product: ";
                cin.ignore();
                getline(cin, prod[i]);
                cout << "Enter cost: ";
                cin >> prices[i];
                cout << "Enter quantity: ";
                cin >> quan[i];

                if (prices[i] < 0 || quan[i] < 0) {
                    cout << "Invalid input. Please enter valid values." << endl;
                    i--; 
                } else {
                    sum += (prices[i] * quan[i]);
                }
            }
        } else {
            cout << "Invalid number of products. Exiting." << endl;
            exit(1);
        }
    }

    void displayCart() {
        cout << "Cart: " << endl;
        cout << "Product Name\tPrice\tQuantity" << endl;
        for (int i = 0; i < MAX_PRODUCTS; i++) {
            if (!prod[i].empty()) {
                cout << prod[i] << "\t\t" << prices[i] << "\t" << quan[i] << endl;
            }
        }
        cout << "Total cost: " << sum << endl;
    }
};

int main() {
    Product p1;
    p1.displayCart();
    return 0;
}