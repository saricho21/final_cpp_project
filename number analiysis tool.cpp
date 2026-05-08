/* 
Scenario from Fundamentals of-Prog Proj.docx:
Number Analysis Tool: Write a C++ program that:
- Takes multiple numbers from the user
- Counts how many are even, odd, positive, and negative
- Uses loops and conditional operators
- Displays summary statistics
*/
#include <iostream>
using namespace std;

int main() {
    int n, e = 0, o = 0, p = 0, neg = 0;
    cout << "Enter count of numbers: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int val; cin >> val;
        (val % 2 == 0) ? e++ : o++;
        if (val > 0) p++; else if (val < 0) neg++;
    }

    cout << "Even: " << e << "\nOdd: " << o << "\nPos: " << p << "\nNeg: " << neg << endl;
    return 0;
}