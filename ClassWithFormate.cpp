#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
        cout << "The value of d is : " << d << endl;
        cout << "The value of e is : " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 32; ---->a is private you can't assign;
    // harry.b = 32; ---->b is private you can't assign;
    // harry.c = 32; ---->c is private you can't assign;
    harry.d = 65; //When you don't assign d or e value then d and e print garbez value;
    harry.e = 8;
    harry.setData(2, 4, 89);
    harry.getData();
    return 0;
}