/* 
Scenario from Fundamentals of-Prog Proj.docx:
Prime Number Generator: Write a program that:
- Displays all prime numbers between 1 and N
- Uses nested loops and logical operators
*/
#include <iostream>
using namespace std;

int main() {
    int n; cout << "N: "; cin >> n;
    for (int i = 2; i <= n; ++i) {
        bool p = true;
        for (int j = 2; j * j <= i; ++j) if (i % j == 0) p = false;
        if (p) cout << i << " ";
    }
    return 0;
}