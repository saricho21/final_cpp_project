/* 
Scenario from Fundamentals of-Prog Proj.docx:
Pattern Generator: Write a program that:
- Prints patterns (triangle, pyramid, etc.)
- Uses nested loops
- Lets user choose pattern type via menu
*/
#include <iostream>
using namespace std;

int main() {
    int c, r;
    cout << "1.Triangle 2.Pyramid: "; cin >> c;
    cout << "Rows: "; cin >> r;
    for (int i = 1; i <= r; ++i) {
        if (c == 2) for (int s = 0; s < r - i; ++s) cout << " ";
        for (int j = 1; j <= (c == 1 ? i : 2 * i - 1); ++j) cout << "*";
        cout << endl;
    }
    return 0;
}
/*Pattern generator out put
1.Triangle 2.Pyramid: 1
Rows: 5
*
**
***
****
*****
1.Triangle 2.Pyramid: 2
Rows: 5
    *
   ***
  *****
 *******
**********/
