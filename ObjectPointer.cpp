#include<iostream>
using namespace std;

class Box
{
    private:
        int a,b,c;
    public:
        void setData(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void showData()
        {
            cout << "a= " << a << " b= " << b << " c= " << c << endl;
        }
};

int main()
{
    //For normal Object
    Box obj;
    obj.setData(4,5,7);
    obj.showData();

    //For Object Pointer
    Box *point,obj1;
    point = &obj1;
    point->setData(6,8,3);
    point->showData();
}