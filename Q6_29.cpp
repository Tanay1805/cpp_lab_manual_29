// Write a program that determines the grade of a student based on their marks of
// 5 subjects using if-else-if ladder.

#include <iostream>
using namespace std;

int main() {
    double marks[5];
    double totalMarks = 0;

    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    double averageMarks = totalMarks / 5;

    char grade;
    if (averageMarks >= 90) {
        grade = 'A';
    } else if (averageMarks >= 80) {
        grade = 'B';
    } else if (averageMarks >= 70) {
        grade = 'C';
    } else if (averageMarks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Average Marks: " << averageMarks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
