#include <iostream>
using namespace std;

int factoral(int a)  // 1st Function
{
    if (a <= 1)      // 2nd Function
    {
        return 1;
    }
    return a * factoral(a - 1);
}
int main()
{
    int n;
    cout << "Enter a Number : " << endl;
    cin >> n;
    cout << "The Factoral of " << n << " is " << factoral(n) << endl;
    return 0;
}