#include <iostream>
using namespace std;

class shop
{
    int itemid[50];
    int itemprice[50];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter id of your item no " << counter + 1 << " :" << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item : " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop alip;
    alip.initcounter();
    cout << "How many item you want to enter : " << endl;
    int m;
    cin >> m;
    for (int  i = 0; i < m; i++)
    {
        alip.setprice();
    }
    // alip.setprice();
    // alip.setprice();
    // alip.setprice();
    alip.displayprice();
    return 0;
}