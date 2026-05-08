/* 
Scenario from Fundamentals of-Prog Proj.docx:
Multiplication Table Generator: Create a program that:
- Displays multiplication tables from 1 to N
- Uses nested loops
- Allows user to repeat or exit
*/
#include <iostream>
using namespace std;

int main() {
    char run;
    do {
        int n; cout << "Enter N: "; cin >> n;
        for (int i = 1; i <= n; ++i) {
            cout << "Table " << i << ": ";
            for (int j = 1; j <= 10; ++j) cout << i * j << " ";
            cout << endl;
        }
        cout << "Repeat? (y/n): "; cin >> run;
    } while (run == 'y' || run == 'Y');
    return 0;
}