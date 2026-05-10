    /* 
Scenario from Fundamentals of-Prog Proj.docx:
Simple ATM Simulation: Design a C++ program using switch and loops that:
- Authenticates user with a PIN (3 attempts)
- Displays menu: Withdraw, Deposit, Check Balance
- Updates balance accordingly
- Exits on user request
*/
#include <iostream>
using namespace std;

int main() {
    int pin = 1234, in, t = 0;
    double bal = 1000.0;
    while (t < 3) {
        cout << "PIN: "; cin >> in;
        if (in == pin) break;
        if (++t == 3) return 0;
    }
    int c;
    while (true) {
        cout << "\n1.Withdraw 2.Deposit 3.Balance 4.Exit: "; cin >> c;
        if (c == 4) break;
        if (c == 1) { double a; cin >> a; if (a <= bal) bal -= a; }
        else if (c == 2) { double a; cin >> a; bal += a; }
        else if (c == 3) cout << "Bal: " << bal << endl;
    }
    return 0;
}
/*Simple ATM simulation out put
1.Withdraw 2.Deposit 3.Balance 4.Exit: 3
Bal: 1000

1.Withdraw 2.Deposit 3.Balance 4.Exit: 1
500

1.Withdraw 2.Deposit 3.Balance 4.Exit: 2
5000

1.Withdraw 2.Deposit 3.Balance 4.Exit: 3
Bal: 5500

1.Withdraw 2.Deposit 3.Balance 4.Exit: 4*/
