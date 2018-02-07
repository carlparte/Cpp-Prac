// out put the biggest value in three numbers
#include <iostream>
using namespace std;
int main()
{
    double a, b, c, max;
    cin >> a >> b >> c;
    if(a>b)
    {
        if(a>c)
            max = a;
        else
            max = c;
    }
    else
    {
        if(b<c)
            max = c;
        else
            max = b;
    }
    cout << max << endl;
    return 0;
}
