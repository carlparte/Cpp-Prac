#include <iostream>
#include <ios> // 定义类型streamsize，用于表示长度
#include <iomanip> // 定义控制器setprecision，指明输出所包含的有效位数
#include <string>
#include <vector> // 定义类型vector
#include <algorithm> //定义函数sort
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
    
    // Use average to represent homework grade.
    // int count=0;
    // double sum=0;
    // double x;
    // while (cin>>x)
    // {
    //     ++count;
    //     sum += x;
    // }
    // streamsize prec = cout.precision();
    // cout<<"The grade is "<<setprecision(3)<<0.2*midterm+0.4*final+0.4*sum/count<<setprecision(prec)<<endl;
    
    // Use meidan to represent homework grade.
    double x;
    vector<double> homework;
    while (cin>>x)
        homework.push_back(x);
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size==0)
    {
        cout<<endl<<"Try again"<<endl;
        return 1;
    }
    sort(homework.begin(), homework.end());
    vec_sz mid=size/2;
    double median;
    median = size%2==0 ? (homework[mid]+homework[mid-1])/2 : homework[mid];
    streamsize prec = cout.precision();
    cout<<"The grade is "<<setprecision(3)<<0.2*midterm+0.4*final+0.4*median<<setprecision(prec)<<endl;
    return 0;
}
