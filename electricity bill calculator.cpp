/* 
Scenario from Fundamentals of-Prog Proj.docx:
Electricity Bill Calculator: Develop a program that:
- Takes units consumed
- Uses if-else (slab system) to calculate bill
- Applies surcharge if bill exceeds a limit
*/
#include <iostream>
using namespace std;

int main() {
    double u, b = 0;
    cout << "Units: "; cin >> u;
    if (u <= 100) b = u * 1.5;
    else if (u <= 300) b = 150 + (u - 100) * 2.5;
    else b = 650 + (u - 300) * 4.0;
    if (b > 500) b *= 1.15;
    cout << "Total: " << b << endl;
    return 0;
}
/*electricity bill out put
Units: 80
Total: 120
Units: 400
Total: 1207.5*/
