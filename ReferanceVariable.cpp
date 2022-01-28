#include <iostream>
using namespace std;
int main()
{
    float a = 786;
    float &b = a;
    cout << "The value of a : " << a << endl;
    cout << "The value of Referance Variable b : " << b << endl;
    return 0;
}