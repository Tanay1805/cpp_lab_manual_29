// Write a program that implements a basic calculator. Use a class Calculator
// with methods to perform addition, subtraction, multiplication, and division of
// two numbers. The program should allow the user to input two numbers and
// select an operation to perform.


#include <iostream>
using namespace std;

class Calculator {
public:
    void calculate() {
        while (true) {
            cout << " Welcome to Calculator \n" << endl;
            cout << "Enter first number: ";
            float num1 = Input();
            cout << "Enter second number: ";
            float num2 = Input();

            cout << "Select operation:" << endl;
            cout << "1 for Addition" << endl;
            cout << "2 for Subtraction" << endl;
            cout << "3 for Multiplication" << endl;
            cout << "4 for Division" << endl;
            cout << "0 to exit" << endl;
            int operation = Choice();

            switch (operation) {
                case 1:
                    addition(num1, num2);
                    break;
                case 2:
                    subtraction(num1, num2);
                    break;
                case 3:
                    multiplication(num1, num2);
                    break;
                case 4:
                    division(num1, num2);
                    break;
                case 0:
                    cout << "Exiting the calculator. Goodbye!" << endl;
                    return;
                default:
                    cout << "Invalid choice! Please enter a valid choice." << endl;
            }
        }
    }

    void addition(float x, float y) {
        cout << "Addition: " << x + y << endl;
    }

    void subtraction(float x, float y) {
        cout << "Subtraction: " << x - y << endl;
    }

    void multiplication(float x, float y) {
        cout << "Multiplication: " << x * y << endl;
    }

    void division(float x, float y) {
        if (y != 0) {
            cout << "Division: " << x / y << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }

private:
    float Input() {
        float value;
        while (true) {
            cin >> value;
            if (cin.fail()) {
                cin.clear(); // Clear the error flag
                cin.ignore(100, '\n'); // Discard invalid input
                cout << "Invalid input. Please enter a valid number: ";
            } else {
                break;
            }
        }
        return value;
    }

    int Choice() {
        int choice;
        while (true) {
            cin >> choice;
            if (cin.fail()) {
                cin.clear(); 
                cin.ignore(100, '\n');
                cout << "Invalid choice. Please enter a valid number: ";
            } else {
                break;
            }
        }
        return choice;
    }
};

int main() {
    Calculator obj;
    obj.calculate();
    return 0;
}
