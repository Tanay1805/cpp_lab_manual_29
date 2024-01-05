// Write a program to calculate the sum of series 1/1! + 2/2! + 3/3! + ... + N/N!
// using nested loops.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    double sum = 0;
    double term = 1;

    for (int i = 1; i <= N; ++i) {
        term /= i;
        sum += term;
    }

    cout << "The sum of the series ";
    for (int i = 1; i <= N; ++i) {
        cout << i << "/" << i << "!";
        if (i < N) {
            cout << " + ";
        }
    }
    cout << " is: " << sum << endl;
    return 0;
}

