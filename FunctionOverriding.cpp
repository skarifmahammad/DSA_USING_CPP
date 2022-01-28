#include<iostream>
using namespace std;

class A
{
    public:
        void x1(int a) //Function Overriding
        {
            cout << "a= " << a << endl;
        }
};
class B : public A
{
    public:
        void x1(int b) //Function Overriding
        {
            cout << "b= " << b << endl;
        }
};
int main()
{
    A obj;
    obj.x1(4);
    B obj2;
    obj2.x1(5);
    
}
