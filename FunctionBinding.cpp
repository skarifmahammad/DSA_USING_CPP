#include<iostream>
using namespace std;

class A
{
    public:
        void x1(int a)
        {
            cout << "a= " << a << endl;
        }
};
class B : public A
{
    public:
        void x2(int b)
        {
            cout << "b= " << b << endl;
        }
};
int main()
{
    B obj2;
    obj2.x1(5);// B
    obj2.x2(3);// A
    
}
