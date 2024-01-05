// Write a program to manage student grades for a classroom. Create a class
// Student with attributes for student name and an array to store grades.
// Implement methods for adding grades, calculating the average grade, and
// displaying the student&#39;s name and grades. Use constructors and destructors to
// initialize and release resources.


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    char grades;
    int sum = 0, avg = 0, n, marks[5];
    int A_GRADE = 100;
    int B_GRADE = 90;
    int C_GRADE = 80;
    int D_GRADE = 70;
    int E_GRADE = 60;
    int PASS_MARK = 50;

public:
    Student() {
        cout << "Enter name of student: ";
        getline(cin, name);
    }

    void addGrade() {
        cout << "Enter number of subjects: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "Enter " << i + 1 << " subject's grade (A, B, C, D, E, F): ";
            cin >> grades;
            grade(grades, i);
        }
    }

    void grade(char grade, int index) {

        switch (tolower(grade)) {
            case 'a':
                marks[index] = A_GRADE;
                break;
            case 'b':
                marks[index] = B_GRADE;
                break;
            case 'c':
                marks[index] = C_GRADE;
                break;
            case 'd':
                marks[index] = D_GRADE;
                break;
            case 'e':
                marks[index] = E_GRADE;
                break;
            default:
                marks[index] = PASS_MARK;
                break;
        }
    }

    void averageGrade() {
        for (int i = 0; i < n; i++) {
            sum += marks[i];
        }
        avg = sum / n;

        // Determine overall grade
        if (avg > A_GRADE) {
            grades = 'A';
        } else if (avg > B_GRADE) {
            grades = 'B';
        } else if (avg > C_GRADE) {
            grades = 'C';
        } else if (avg > D_GRADE) {
            grades = 'D';
        } else if (avg > E_GRADE) {
            grades = 'E';
        } else {
            grades = 'F';
        }
    }

    void showDetails() {
        cout << endl;
        cout << "Name of Student: " << name << endl;
        cout << "Average grade: " << grades << endl;
    }

    ~Student() {
        cout << "Destructor is called." << endl;
    }
};

int main() {
    Student s1;
    s1.addGrade();
    s1.averageGrade();
    s1.showDetails();
    return 0;
}
