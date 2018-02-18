#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct telelist 
    {
        char name[8]; 
        bool sex; 
        char num1[5]; 
        char num2[5];
    } list1[3];
    // Input
    cout<<"Enter the name, sex(1 or 0), num1 and num2, seperated with space: "<<endl;
    int i;
    for (i=0;i<=1;i++)
        cin>>list1[i].name>>list1[i].sex>>list1[i].num1>>list1[i].num2;
    for (i=1;i>=0;i--)
        cout<<list1[i].name<<"/"<<list1[i].sex<<"/"<<list1[i].num1<<"/"<<list1[i].num2<<endl;
    return 0;
}
