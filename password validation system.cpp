/* 
Scenario from Fundamentals of-Prog Proj.docx:
Password Validation System: Write a program that:
- Repeatedly asks for a password
- Validates using conditions (length, digits, uppercase, etc.)
- Stops after 3 failed attempts
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    int tries = 0;
    while (tries < 3) {
        cout << "Enter complex password: "; cin >> p;
        bool u = false, d = false, l = p.length() >= 8;
        for (char c : p) {
            if (c >= 'A' && c <= 'Z') u = true;
            if (c >= '0' && c <= '9') d = true;
        }
        if (u && d && l) { cout << "Valid!\n"; return 0; }
        cout << "Weak password.\n"; tries++;
    }
    cout << "Locked out.\n";
    return 0;
}