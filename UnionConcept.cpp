#include <iostream>
using namespace std;

union money
{
    int num;
    char car;
    float pounds;
};
int main()
{
    union money m1;
    m1.num =45;
    // m1.car = 'b';
    cout << "The value of m1.num is : " << m1.num << endl;
    return 0;
}