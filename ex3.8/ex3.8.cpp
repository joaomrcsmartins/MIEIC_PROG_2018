// ex3.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int gcd(int m, int n)
{
	if (m % n == 0)
		return n;
	else return gcd(n, m%n);
}

int main()
{
	int m, n;
	cout << "Indique os numeros para determinar o mdc : ";
	cin >> m >> n;
	cout << gcd(m, n) << endl;
    return 0;
}

