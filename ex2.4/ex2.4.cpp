// ex2.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double peso;
	double custo;
	cout << "Qual o peso? (em g): ";
	cin >> peso;
	int x = (peso - 500) / 100;
	int y = (peso - 1000) / 250;
	if (peso < 500)
		cout << "O custo e: 5 euros."<< endl;
	else if ((peso >= 500) && (peso <= 1000))
	{
		custo = 5 + 1.5 * x;
		cout << "O custo e: " << custo << " euros." << endl;
	}
	else if ((peso > 1000))
	{
		custo = 12.5 + 5 * y;
		cout << "O custo e: " << custo << " euros." << endl;
	}
	return 0;
}

