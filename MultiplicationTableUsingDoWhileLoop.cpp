#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number for Do While Loop : ";
    cin >> a;
    int i = 1;
    do
    {
        cout << a << " * " << i << " = " << a * i << endl;
        i++;
    } while (i < 11);
    return 0;
}