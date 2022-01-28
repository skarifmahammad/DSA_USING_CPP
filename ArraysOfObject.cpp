#include <iostream>
using namespace std;

class Employee
{
   int id;
   int selary;

public:
   void setData(void)
   {
      selary=20000;
      cout << "Enter the id of Employee : ";
      cin >> id;
   }
   void getData(void)
   {
      cout << "The id of Employee is " << id << " and selary is " << selary << endl;
   }
};
int main()
{
   Employee Alif[5];
   for(int i=0;i<5;i++)
   {
      Alif[i].setData();
      Alif[i].getData(); 
   }
   return 0;
}