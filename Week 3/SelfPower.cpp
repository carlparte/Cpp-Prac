// find self power numbers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;  // 位数
    int start, end; // 起始值和终止值
    int m; // 待分解各位的数
    int digit; // 个位数
    int sum; // n次方和
    int i; // 循环变量
    cout << "Input n: ";
    cin >> n;
    while(n>0)
    {
        start = pow(10, n - 1);
        end = pow(10, n) - 1;
        cout << n << " digits self power: ";
        for (i = start; i <= end;i++)
        {
            m = i;
            sum = 0;
            while(m!=0)
            {
                digit = m % 10; // 最低位数字
                sum = sum + pow(digit, n);
                m = m / 10; // 去掉各位
            }
            if(sum==i)
            {
                cout << i << " ";
            }
        }
        cout << endl;
        cout << "input n: ";
        cin >> n;
    }

    return 0;
}
