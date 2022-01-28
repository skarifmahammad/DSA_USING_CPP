#include <iostream>
using namespace std;

class Employee
{
private:
   int id;
   // int count=1;
   static int count;

public:
   void setData(void)
   {
      cout << "Enter the id " << endl;
      cin >> id;
      count++;
   }
   void getData(void)
   {
      cout << "The id of this Employee is " << id << " and this is Employee number " << count << endl;
   }
   static void getCount(void) //static data function
   {
      cout << "The value of count is "<< count << endl;
   }
};

int Employee::count; //count is the static data member of class Employee.
int main()
{
   Employee Arif,Ashif,Daud;
   Arif.setData();
   Arif.getData();
   Employee::getCount(); //static data function call

   Ashif.setData();
   Ashif.getData();
   Employee::getCount(); //static data function call

   Daud.setData();
   Daud.getData();
   Employee::getCount(); //static data function call
   return 0;
}