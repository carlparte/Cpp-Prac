#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    double s, A;
    cout << "Input three edges a,b,c= ";
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area is " << A << endl;
    return 0;
}
