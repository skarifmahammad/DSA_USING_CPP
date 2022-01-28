#include<iostream>
using namespace std;

class Box
{
    private:
        int a,b,c;
    public:
        void setData(int a,int b,int c)
        {
            this->a=a;
            this->b=b;
            this->c=c;
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
}