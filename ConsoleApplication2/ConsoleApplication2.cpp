#include <iostream>
#include<windows.h>
#include<string>
#include"Header.h"
using namespace std;

int Avtomobil::count = { 1 };
int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 
Avtomobil BMW("BMW", "X5", 2007, 4.4) ;
Avtomobil Mersedes("Mersedes", "E45", 2009, 3.2);
BMW.Vivod();
Mersedes.Vivod();
}
