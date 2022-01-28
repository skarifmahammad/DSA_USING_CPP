#include <iostream>
using namespace std;
int main()
{
    float d = 34.3F;
    long double e = 34.3L;
    cout << "The size of 34.3 is : " << sizeof(34.3) << endl; //print double value : 8;
    cout << "The size of 34.3f is : " << sizeof(34.3f) << endl; //print float value : 4;
    cout << "The size of 34.3F is : " << sizeof(34.3F) << endl;
    cout << "The size of 34.3l is : " << sizeof(34.3l) << endl;
    cout << "The size of 34.3L is : " << sizeof(34.3L) << endl;
}