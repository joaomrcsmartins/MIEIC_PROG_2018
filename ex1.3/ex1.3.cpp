// ex1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	float p, r;
	cout << "Qual e a massa da esfera? (em Kg/m3) : ";
	cin >> p;
	cout << "Qual o raio da esfera? (em m) : ";
	cin >> r;
	cout << " A massa da esfera e : " << 4 / 3 * (p * acos(-1) * pow(r,3)) << " kg " << endl;

}

