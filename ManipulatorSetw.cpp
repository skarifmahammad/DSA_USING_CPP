#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 5, b = 56, c = 4657;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;
    cout << endl;
    cout << "The value of a with setw is : " << setw(4) << a << endl;
    cout << "The value of b with setw is : " << setw(4) << b << endl;
    cout << "The value of c with setw is : " << setw(4) << c << endl;
    return 0;
} 