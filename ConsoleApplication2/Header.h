#pragma once
#include <iostream>
#include<windows.h>
#include<string>
using namespace std;
class Avtomobil
{
	string brend;
	string model;
	int year;
	float obyem;
	static   int count;

public:
	Avtomobil(string b, string m, int y, float o) 
	{
		brend = b;
		model = m;
		year = y;
		obyem = o;
		+count;
		
	}
 
	
	void Vivod() 
	{
cout << "Автомобиль  "   <<count++ <<" " << brend << " " << model << " "
<<year<< " года выпуска " << " и объем двигателя " 
<< obyem << endl;
	}

};

