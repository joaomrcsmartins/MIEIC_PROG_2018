// ex2.9.cpp : Defines the entry point for the console application.
//				

#include "stdafx.h"
#include <iostream>

using namespace std;


void ex29a()
{
	cout << " Escreva a sequencia de numeros e termine com 0: ";
	double maior = -1 * pow(10, 8);
	double menor = 1 * pow(10, 8);
	int soma = 0;
	int cont = 0;
	double media;
	for (int x = 1; true; cont++)
	{
		cin >> x;
		if (x == 0)
			break;
		else {
			if (x >= maior)
				maior = x;
			if (x <= menor)
				menor = x;
			soma = soma + x;
		}
	}
	media = (double) soma / cont;
	cout << " A soma, media, maior e menor numero e, respetivamente: " << soma << ", " << media << ", " << maior << ", " << menor << endl;
}

void ex29b()
{
	int size;
	cout << "Diga o comprimento da sequencia: ";
	cin >> size;
	double maior = -1 * pow(10, 8);
	double menor = 1 * pow(10, 8);
	int soma = 0;
	int cont = 0;
	double media;
	cout << " Escreva a sequencia de numeros: ";
	for (int x = 1; cont < size; cont++)
	{
		cin >> x;
			if (x >= maior)
				maior = x;
			if (x <= menor)
				menor = x;
			soma = soma + x;
	}
	media = (double) soma / cont;
	cout << " A soma, media, maior e menor numero e, respetivamente: " << soma << ", " << media << ", " << maior << ", " << menor << endl;
}

void ex29c()
{
	double maior = -1 * pow(10, 8);
	double menor = 1 * pow(10, 8);
	int soma = 0;
	int cont = 0;
	double media;
	cout << " Escreva a sequencia de numeros: ";
	for (int x = 1; true; cont++)
	{
		cin >> x;
		if (cin.fail())
		{
			if (cin.eof())
				break;
			else
			{
				cin.clear();
				cin.ignore(1000, '\n');
			}
		}
		if (x >= maior)
			maior = x;
		if (x <= menor)
			menor = x;
		soma = soma + x;
	}
	media =(double) soma / cont;
	cout << " A soma, media, maior e menor numero e, respetivamente: " << soma << ", " << media << ", " << maior << ", " << menor << endl;
}





int main()
{
	char x;
	cout << "Qual alinea quer ver? ";
	cin >> x;
	if (toupper(x) == 'A')
		ex29a();
	else if (toupper(x) == 'B')
		ex29b();
	else if (toupper(x) == 'C')
		ex29c();
	else
		cout << "Exercicio nao encontrado" << endl;
	return 0;
}

