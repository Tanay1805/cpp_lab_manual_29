// Write a program to calculate the sum of elements in each row of a matrix.

#include <iostream>
using namespace std;

int main() {
    int r, c;

    do {
        cout << "Enter the number of rows: ";
        cin >> r;

        cout << "Enter the number of columns: ";
        cin >> c;

        if (r != c) {
            cout << "The matrix must be square (rows should equal columns)." << endl;
        }

    } while (r != c);

    int matrix[r][c];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate and display the sum of elements in each row
    cout << "Sum of elements in each row:" << endl;
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}
