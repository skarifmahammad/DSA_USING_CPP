#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your Age :";
    cin >> age;
    switch (age)
    {
    case 14:
        cout << "You are Boy/Girl.";
        break;
    case 18:
        cout << "You are Adult.";
        break;
    case 60:
        cout << "You are old.";
        break;
    default:
        cout << "Your age is not in range.";
        break;
    }
    return 0;
}