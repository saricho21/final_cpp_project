/* 
Scenario from Fundamentals of-Prog Proj.docx:
Student Grading System: Write a menu-driven C++ program that:
- Accepts marks for N students using a loop
- Calculates average marks
- Uses if-else to assign grades (A, B, C, F)
- Displays highest and lowest marks
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    double total = 0, highest = -1.0, lowest = 101.0;
    
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        double mark;
        cout << "Enter marks for student " << i << " (0-100): ";
        cin >> mark;

        if (mark < 0 || mark > 100) {
            cout << "Invalid marks! Try again.\n";
            i--; continue;
        }

        total += mark;
        if (mark > highest) highest = mark;
        if (mark < lowest) lowest = mark;

        cout << "Grade: ";
        if (mark >= 90) cout << "A\n";
        else if (mark >= 80) cout << "B\n";
        else if (mark >= 70) cout << "C\n";
        else cout << "F\n";
    }

    if (n > 0) {
        cout << "\nAverage: " << total / n << "\nHighest: " << highest << "\nLowest: " << lowest << endl;
    }
    return 0;
}