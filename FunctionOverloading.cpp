#include <iostream>
using namespace std;

int volume(double r, int h)
{
    return (3.14 * r * r * h); //For Cuboid;
}

int volume(int a)
{
    return a * a * a; //For Cylinder;
}

int volume(int l, int b, int h)
{
    return (l * b * h); //For Cube;
}

int main()
{
    cout << "The volume of cuboid of 3,5 and 8 is : " << volume(3, 5, 8) << endl;
    cout << "The volume of cylinder of radius 3 and height 8 is : " << volume(3, 8) << endl;
    cout << "The volume of cube of side 3 is : " << volume(3) << endl;
    return 0;
}