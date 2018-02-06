#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Enter your first name: ";
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + "!";
    //the two sides of "+" cannot be both string.
    const string spaces(greeting.size(), ' '); //the second line
    const string second = "*" + spaces + "*";
    const string first(second.size(), '*');

    //output
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "*" << greeting << "*" << endl;
    cout << second << endl;
    cout << first << endl;

    return 0;
}
