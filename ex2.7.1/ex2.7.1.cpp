// ex2.7.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include < iomanip>
using namespace std;


void ex27a()
{
	cout << fixed << setprecision(6);
	cout << " ang               sen               cos               tan " << endl;
	for (int x = 0; x <= 90;)
	{
		double pi = acos(-1);
		double radx = x * pi / 180;
		if (x == 90 || x == 270)
			cout << x << "               " << (float)sin(radx) << "                " << (float)cos(radx) << "               " << "infinito " << endl;
		else		cout << x << "               " << (float) sin(radx) << "                " << (float) cos(radx) << "               " << (float) tan(radx) << endl;
		x = x + 15;
	}
}
void ex27b()
{
	int min, max;
	double inc;
	
	cout << fixed << setprecision(6);
	cout << " Qual o intervalo dos graus? (min max) ";
	cin >> min >> max;
	cout << " Qual o incremento? ";
	cin >> inc;
	cout << " ang               sen               cos               tan " << endl;
	for (int x = min; x <= max;)
	{
		double pi = acos(-1);
		double radx = x * pi / 180;
		if (x == 90 || x == 270)
			cout << x << "               " << (float)sin(radx) << "                " << (float)cos(radx) << "               " << "infinito " << endl;
		else		cout << x << "               " << (float)sin(radx) << "                " << (float)cos(radx) << "               " << (float)tan(radx) << endl;
		x = x + inc;
	}

}
int main()
{
	char x;
	cout << "Qual alinea quer ver? ";
	cin >> x;
	if (toupper(x) == 'A')
		ex27a();
	else if (toupper(x) == 'B')
	ex27b();
	else
		cout << "Exercicio nao encontrado" << endl;
	return 0;
}