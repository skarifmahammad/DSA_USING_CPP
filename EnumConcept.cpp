#include <iostream>
using namespace std;

int main()
{
    enum Meal{breakfast,lunch,dinner};
    cout << breakfast << endl;    //Meal m1 = lunch;
    cout << lunch << endl;        //Meal m2 = breakfast;
    cout << dinner << endl;       //cout << m1 << endl;
                                  //cout << m2 << endl;
    return 0;
}