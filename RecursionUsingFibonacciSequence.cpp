#include <iostream>
using namespace std;

int fab(int b)
{
    if (b < 2)
    {
        return 1;
    }
    return fab(b - 2) + fab(b - 1);
}
int main()
{
    int n;
    cout << "Enter Fibonacci Sequence possition : ";
    cin >> n;
    cout << "Fibonacci Sequence of " << n << " possition is : " << fab(n) << endl;
    return 0;
}