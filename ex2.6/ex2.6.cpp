// ex2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int ex26a()
{
	int n;
	bool prim = true;
	cout << "Que numero quer ler?" << endl;
	cin >> n;
	if (n == 2)
	{
		prim = true;
	}
	for (int x = 2; x <= sqrt(n); x++)
	{
		if (n%x == 0)
		{
			prim = false;
			break;
		}
	}
	if (prim == true)
	{
		cout << "E primo." << endl;
	}
	else {
		cout << "Nao e primo." << endl;
		return 0;
	}
}

void ex26b() {
	int sum = 0; 
	cout << " os 100 primeiros primos sao: " << endl;
	for (int n = 2; sum < 100; n++)
	{
		bool prim = true;
		for (int x = 2; x <= sqrt(n); x++) 
		{
			if (n%x == 0)     
			{                
				prim = false;
				break;
			}
		}
		if (prim == true)    
		{                 
			sum++;
			cout << n << endl;
		}                  
	}                      
}

void ex26c()
{
	cout << " Os numeros primos inferiores a 1000 sao: " << endl;
	for (int n = 2; n < 1000; n++)
	{
		bool prim = true;
		for (int x = 2; x <= sqrt(n); x++) 
		{
			if (n%x == 0)     
			{                 
				prim = false;
				break;
			}
		}
		if (prim == true)   
		{                  
			cout << n << endl;
		}                  
	}
}
int main()
{
	char x;
	cout << "Qual alinea quer ver? ";
	cin >> x;
	if (toupper(x) == 'A')
		ex26a();
	else if (toupper(x) == 'B')
		ex26b();
	else if (toupper(x) == 'C')
		ex26c();
	else
		cout << "Exercicio nao encontrado" << endl;
}