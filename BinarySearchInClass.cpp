#include <iostream>
#include <string>
using namespace std;

class binary
{
// private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "After 1's Complement;" << endl;
}
void binary ::display(void)
{
    cout << "Displaying your binary number : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}