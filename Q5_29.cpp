// Write a program that finds the largest among three numbers using nested if-else
// statements

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Enter three numbers(eg: 12 34 5): ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << num1 << " is the largest number." <<endl;
        } else {
            cout << num3 << " is the largest number." <<endl;
        }
    } else {
        if (num2 >= num3) {
            cout << num2 << " is the largest number." <<endl;
        } else {
            cout << num3 << " is the largest number." <<endl;
        }
    }
    return 0;
}
