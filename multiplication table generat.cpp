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
/*Multiplication taple out put
Enter N: 5
Table 1: 1 2 3 4 5 6 7 8 9 10 
Table 2: 2 4 6 8 10 12 14 16 18 20 
Table 3: 3 6 9 12 15 18 21 24 27 30 
Table 4: 4 8 12 16 20 24 28 32 36 40 
Table 5: 5 10 15 20 25 30 35 40 45 50 
Repeat? (y/n): */
