// ex2.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
	double q, j;
	int n;
	cout << " Qual a quantia a depositar, numero de anos em caixa e taxa de juro anual (%)? ";
	cin >> q >> n >> j;
	double j2 = j / 100;
	for (int x = 0; x <= n; x++)
		q = q + j2 * q;
	cout << " A quantia total a receber e: " << q << endl;

}

