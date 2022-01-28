#include <iostream>
using namespace std;

//Call by referance using pointer;
void swap(int* a, int* b) //void swap(int a, int b)
{
    int temp;    
    temp = *a;           //temp = a;
    *a = *b;             //a = b;
    *b = temp;           //b = temp;
}
int main()
{
    int num1, num2;
    cout << "Enter first Number : " << endl;
    cin >> num1;
    cout << "Enter second Number : " << endl;
    cin >> num2;
    cout << "The value before Swap " << endl;
    cout << "The value of num1 : " << num1 << " and the value of num2 : " << num2 << endl << endl;
    swap(&num1, &num2);   //swap(num1, num2);
    cout << "The value after Swap " << endl;
    cout << "The value of num1 : " << num1 << " and the value of num2 : " << num2 << endl << endl;
    return 0;
}