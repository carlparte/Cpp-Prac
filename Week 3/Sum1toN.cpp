#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i, n;
    cout << "input a integer n: ";
    cin >> n;
    for (i = 1; i <= n;i++) // 变量及初始值；循环条件；增量
        sum = sum + i;
    cout << "the sum is " << sum << endl;
    return 0;
}
