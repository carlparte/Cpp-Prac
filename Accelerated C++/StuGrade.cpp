#include <iostream>
#include <ios> // 定义类型streamsize，用于表示长度
#include <iomanip> // 定义控制器setprecision，指明输出所包含的有效位数
#include <string>
using namespace std;
int main()
{
    cout<<"Enter student name: ";
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<"!"<<endl;
    cout<<"Enter midterm grade and final grade: ";
    double midterm, final;
    cin>>midterm>>final;
    cout<<"Enter all homework grade(CTRL+D to stop input): "<<endl;
    int count=0;
    double sum=0;
    double x;
    while (cin>>x)
    {
        ++count;
        sum += x;
    }
    streamsize prec = cout.precision();
    cout<<"The grade is "<<setprecision(3)<<0.2*midterm+0.4*final+0.4*sum/count<<setprecision(prec)<<endl;
    return 0;
}
