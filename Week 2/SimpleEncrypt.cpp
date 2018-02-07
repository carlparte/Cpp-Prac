// 将英文字母视为一个循环，输入字母c，将其序号加k，按照新序号在字母表中找到新字母代替。
#include <iostream>
using namespace std;
int main()
{
    char c, ec;
    int k;
    cout << "Input a lower character and k: " << endl;
    cin >> c >> k;
    ec = ((c - 'a') + k) % 26 + 'a';
    cout << ec << endl;
    return 0;
}
