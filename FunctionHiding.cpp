#include<iostream>
using namespace std;

class A
{
    public:
        void x1(int a,int b) //Function Hiding
        {
            cout <<"a= " << a << " b= " << b << endl;
        }
};
class B : public A
{
    public:
        void x1(int c) //Function Hiding
        {
            cout << "c= " << c << endl;
        }
};
int main()
{
    A obj;
    obj.x1(3,7);
    B obj2;
    obj2.x1(5);
}
