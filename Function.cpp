#include <iostream>
using namespace std;

int sum(int a, int b) // int sum(int a, int b); ---->Acceptable
{                     // int sum(int a ,b); ---->Not Acceptable
    int c = a + b;    // int sum(int, int); ---->Acceptable
    return c;
}
int main()
{
    int num1, num2;
    cout << "Enter first Number : " << endl;
    cin >> num1;
    cout << "Enter second Number : " << endl;
    cin >> num2;
    cout << "The sum of : " << sum(num1, num2) << endl;
    return 0;
}

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }