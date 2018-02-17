#include <iostream>
using namespace std;
int main()
{
    // char month[12][5]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    // int m;
    // cin>>m;
    // if (m>0 && m<13)
    //     cout<<month[m-1]<<endl;
    // else
    //     cout<<"Error";
    // return 0;
    char week[7][5]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int m, w;
    cin>>m;
    w=m%7;
    if (w==0)
        cout<<week[6]<<endl;
    else
        cout<<week[w-1]<<endl;
    return 0;
}
