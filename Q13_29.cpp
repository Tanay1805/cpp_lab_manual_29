// Write a program to generate all possible permutations of a string.

#include <iostream>
using namespace std;
void Permutations(char str[], int start, int end) {
    if (start == end) {
        cout << str <<endl;
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(str[start], str[i]);
        Permutations(str, start + 1, end); 
        swap(str[start], str[i]);
    }
}

int main() {
    const int maxSize = 100; 
    char input[maxSize];

    cout << "Enter a string: ";
    cin >> input;

    int n = 0;
    while (input[n] != '\0') {
        n++;
    }

    cout << "All possible permutations of the string are:" <<endl;
    Permutations(input, 0, n - 1);

    return 0;
}
