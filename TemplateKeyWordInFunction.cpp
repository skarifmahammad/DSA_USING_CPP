#include <iostream>
using namespace std;  //Function Template or Generic Function

//template <class type> type func_name(type args1, type args2, type.....); // type is place holder;
template <class x> //x is place holder
x grater(x a,x b)
{
    if(a>b)
        cout << a << " is grater" << endl;
    else
        cout << b << " is grater" << endl;
}
// double grater(double a,double b)
// {
//     if(a>b)
//         cout << a << " is grater" << endl;
//     else
//         cout << b << " is grater" << endl;
// }
int main()
{
    grater(4,5);
    grater(9,6);
    grater(2.9,4.6);
    return 0;
}