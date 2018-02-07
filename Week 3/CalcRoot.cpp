#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, n;
    while(1)
    {
        cout << "Input x and n: ";
        cin >> x >> n;
        if(x==0&&n==0)
            {
                cout << "Finished" << endl;
                break;
            }
        else
            if((x<0&&x<=0)||(x<0&&1/n!=int(1/n)))
            {
                cout<<"Error. Input again: "<<endl;
                continue;
            }
        cout << x << "\t" << n << "th root is " << pow(x, 1.0 / n) << endl;
    }
    return 0;
}
