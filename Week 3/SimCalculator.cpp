#include <iostream>
using namespace std;

int main()
{
    double m, n;
    char op;
    cout << "Input the sentence: ";
    cin >> m >> op >> n;

    switch(op)
    {
        case '+':
            cout << m + n << endl;
            break;
        case '-':
            cout << m - n << endl;
            break;
        case '*':
            cout << m * n << endl;
            break;
        case '/':
            if(n==0.0)
                cout << "Invalid input" << endl;
            else
                cout << m / n << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }
    return 0;
}
