#include <iostream>
using namespace std;

int sum(int ,int );
void g();
int main()
{
    int num1, num2;
    cout << "Enter first Number : " << endl;
    cin >> num1;
    cout << "Enter second Number : " << endl;
    cin >> num2;
    cout << "The sum of : " << sum(num1, num2) << endl;
    g();
    return 0;
}
int sum(int a, int b) //function
{
    int c = a + b;
    return c;
}
void g()
{
    cout << "Hello, Good Morning." << endl;
}