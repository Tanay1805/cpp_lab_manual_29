// Write a program to creating an inventory management system for a small
// store. The system should use object-oriented principles in C++. Your program
// should have the following features:
// • Create a Product class that represents a product in the inventory. Each
// Product object should have the following attributes:
// • Product ID (an integer)
// • Product Name (a string)
// • Price (a floating-point number)
// • Quantity in stock (an integer)
// • Implement a parameterized constructor for the Product class to
// initialize the attributes when a new product is added to the inventory.


#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int prod_id;
    string prod_name;
    float price;
    int quantity;

public:
    Product()
    {
        prod_id = 0;
    }
    Product(int id, const string &n, float p, int q)
        : prod_id(id), prod_name(n), price(p), quantity(q)
    {
    }
    void displayProduct()
    {
        cout << "Product ID: " << prod_id << endl;
        cout << "Product Name: " << prod_name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
    int getProductId() const
    {
        return prod_id;
    }
    string getProductName() const
    {
        return prod_name;
    }
    float getPrice() const
    {
        return price;
    }
    int getQuantity() const
    {
        return quantity;
    }
    void setQuantity(int q)
    {
        quantity = q;
    }
};

int main()
{
    int n, prod_id, quantity;
    string prod_name;
    float price;
    cout << "Enter the number of products: ";
    cin >> n;
    Product products[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Product ID: ";
        cin >> prod_id;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, prod_name);
        cout << "Enter Price of Product: ";
        cin >> price;
        cout << "Enter Quantity of Product: ";
        cin >> quantity;
        products[i] = Product(prod_id, prod_name, price, quantity);
    }
    cout << "\nInventory:\n";
    for (int i = 0; i < n; i++)
    {
        products[i].displayProduct();
        cout << "------------------------\n";
    }

    return 0;
}
