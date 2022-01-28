#include<iostream>
using namespace std;

class A
{
    private:
        int x;
    protected:
        void setValue(int k)
        {
            x=k;
        }
};
class B : public A
{
    public:
        void setData(int l)
        {
            setValue(l);
        }
};

int main()
{
    B obj;
    // obj.setValue(4); //It does not Accessable
    obj.setData(4);
}