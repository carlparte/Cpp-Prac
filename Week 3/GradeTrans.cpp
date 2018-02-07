// transform marks to grades
#include <iostream>
using namespace std;
int main()
{
    int mark, grade;
    cin >> mark;
    switch(mark/10)
    {
        case 10:
            grade = 5; // 若一个分支语句为空，将输出下一个语句的结果
            break;
        case 9:
            grade = 5;  // 常量表达式类型应当与switch后表达式类型一致
            break; // 不可删除，应立即退出，否则将执行下一句赋值
        case 8:
            grade = 4;
            break;
        case 7:
            grade = 3;
            break;
        case 6:
            grade = 2;
            break;
        default:
            grade = 1; // 最后一句，无需break
    }
    cout << grade;
    return 0;
}
