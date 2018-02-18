#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows and columns: ";
    int r, c;
    cin>>r>>c;
    // Rectangle
    for (int i=0; i<r; i++)
    {
        for (int m=0; m<c; m++)
            cout<<"*";
        cout<<endl;
    };
    // Triangle
    for (int n=1; n<=r; n++)
    {
        for (int p=0; p<n; p++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
