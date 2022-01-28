#include <iostream>
using namespace std;

inline int swap(int &a, int &b) // Inline Function.
{
    return a*b; 
}
int main()
{
    int num1, num2;
    cout << "Enter first Number : " << endl;
    cin >> num1;
    cout << "Enter second Number : " << endl;
    cin >> num2;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    cout << "The value before : " << swap(num1, num2) << endl;
    return 0;
}