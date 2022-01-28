#include<iostream>
using namespace std;
int a=45; //For Global Variable you can use (::) for print output;
int main()
{
    int a,x=5,y=8;
    a=x+y;
    cout << "The value of a : " << a << endl;
    cout << "The value of Global Variable a : " << ::a << endl; //(::)
    return 0;
}