#include <iostream>
using namespace std;
int main()
// {  // ? as an operator. If true, the first, if not, the second.
//     double t, y;
//     cout << "Input a number: ";
//     cin >> t;
//     y = (t >= 0 ? 1 : 0); // ":"前后类型相同
//     cout << y << endl;
//     return 0;
// }
{  // , as an operator. Output the the value of the last sentence.
    int a = 1, b = 2, c = 3;
    int y;
    y = (a = a + 1, b = b + 2, c = c + 3);
    cout << a << b << c << y << endl;
    return 0;
}
