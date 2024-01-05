// Write a program to create an array of strings and display them in alphabetical
// order.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int len;
    cout<<"Enter the number of characters:";
    cin>>len;
    const int size = len;
    string strArray[size];

    cout << "Enter " << size << " strings:" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << "String " << i + 1 << ": ";
        cin >> strArray[i];
    }


    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (strArray[j] > strArray[j + 1]) {
                string temp = strArray[j];
                strArray[j] = strArray[j + 1];
                strArray[j + 1] = temp;
            }
        }
    }

    cout << "\nStrings in alphabetical order:" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << strArray[i] <<endl;
    }
    return 0;
}
