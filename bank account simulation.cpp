/* 
Scenario from Fundamentals of-Prog Proj.docx:
Bank Account Simulation: Develop a C++ program using a loop and switch that:
- Allows deposit, withdrawal, and balance check
- Prevents overdrawing using if condition
- Repeats operations until the user selects exit
*/
#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;

    while (true) {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 4) break;

        switch (choice) {
            case 1: {
                double amt; cout << "Amount: "; cin >> amt;
                balance += (amt > 0) ? amt : 0;
                break;
            }
            case 2: {
                double amt; cout << "Amount: "; cin >> amt;
                if (amt > balance) cout << "Insufficient funds!\n";
                else balance -= amt;
                break;
            }
            case 3: cout << "Balance: $" << balance << endl; break;
            default: cout << "Invalid option.\n";
        }
    }
    return 0;
}
/*Sample Bank account simulation out put
1. Deposit
2. Withdraw
3. Balance
4. Exit
Choice: 1
Amount: 5000

1. Deposit
2. Withdraw
3. Balance
4. Exit
Choice: 2
Amount: 2000

1. Deposit
2. Withdraw
3. Balance
Choice: 3
Balance: $3000
1. Deposit
2. Withdraw
3. Balance
4. Exit
Choice: 4
..........*/
