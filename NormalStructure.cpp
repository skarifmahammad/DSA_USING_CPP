#include <iostream>
using namespace std;

struct employee         //typedef struct employee
{                       //{
    int eId;            //    int eId;
    char favChar;       //    char favChar;
    float salary;       //    float salary;
};                      //}em;

int main()
{
    struct employee ashif; //struct employee ashif;----->em ashif;
    ashif.eId =36;
    ashif.favChar = 'a';
    ashif.salary = 450000;
    cout << "The value of employee Id : " << ashif.eId << endl;
    cout << "The value of employee favChar : " << ashif.favChar  << endl;
    cout << "The value of employee salary : " << ashif.salary << endl;
    return 0;
}