/* 
Scenario from Fundamentals of-Prog Proj.docx:
Quiz Game System: Create a quiz program that:
- Asks multiple questions using a loop
- Checks answers using if or switch
- Calculates and displays final score
*/
#include <iostream>
using namespace std;

int main() {
    int s = 0, a;
    for (int i = 1; i <= 3; ++i) {
        if (i == 1) cout << "10+10? (1. 20, 2. 30): ";
        if (i == 2) cout << "Capital of IT? (1. Silicon Valley, 2. Mars): ";
        if (i == 3) cout << "C++ creator? (1. Bjarne, 2. Musk): ";
        cin >> a;
        if (a == 1) s++;
    }
    cout << "Score: " << s << "/3" << endl;
    return 0;
}