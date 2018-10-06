// ex3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


void lercoor(double &x1, double &y1, double &x2, double &y2, double &x3, double &y3)
{
	cout << " Quais sao as coordenadas do ponto 1? ";
	cin >> x1;
	cin >> y1;
	cout << " Quais sao as coordenadas do ponto 2? ";
	cin >> x2;
	cin >> y2;
	cout << " Quais sao as coordenadas do ponto 3? ";
	cin >> x3;
	cin >> y3;
}

double distance(double x1, double y1, double x2, double y2)
{
	double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return dist;
}

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double a = distance(x1, y1, x2, y2);
	double b = distance(x1, y1, x3, x3);
	double c = distance(x1, y2, x3, y3);
	double sp = (a + b + c) / 2;
	double area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
	return area;
}
int main()
{
	double x1, y1, x2, y2, x3, y3;
	lercoor(x1, y1, x2, y2, x3, y3);
	double area1 = area(x1, y1, x2, y2, x3, y3);
	cout << " A area do triangulo e: " << area1 << endl;
	return 0;

}
