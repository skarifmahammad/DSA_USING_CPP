#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("File Handling.dat"); //It will save on "C:\Users\arifm\Desktop\Visual Studio Code Folder\C++ Practice" this location
    getch();
    fout << "Handling1244";
    fout.close();
    return 0;
}