// ex2.15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>


using namespace std;
/*
int main()
{
	srand(time(NULL));
	int answer;
	int n1 = rand() % 9 + 2;
	int n2 = rand() % 9 + 2;
	clock_t begin = clock();
	cout << " " << n1 << " * " << n2 << " = ? ";
	cin >> answer;
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	if (answer == n1 * n2)
	{
		if (elapsed_secs < 5)
		{
			cout << " Bom! " << endl;
		}
		else if (elapsed_secs <= 10)
		{
			cout << " Suficiente " << endl;
		}
		else { cout << " Insuficiente..." << endl; }
	}
	else { cout << " Muito mau!!! " << endl; }

	return 0;
}
*/
int main()
{
	srand(time(NULL));
	int respostascertas = 0;
	int perguntas = 0;
	for (int x = 0; x < 10; x++)
	{
		int answer;
		int n1 = rand() % 9 + 2;
		int n2 = rand() % 9 + 2;
		clock_t begin = clock();
		cout << " " << n1 << " * " << n2 << " = ? ";
		cin >> answer;
		clock_t end = clock();
		double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
		if (answer == n1 * n2)
		{
			respostascertas++;

			if (elapsed_secs < 5)
			{
				cout << " Bom! " << endl;
			}
			else if (elapsed_secs <= 10)
			{
				cout << " Suficiente " << endl;
			}
			else { cout << " Insuficiente..." << endl; }
		}
		else { cout << " Muito mau!!! " << endl; }
		cout << endl;
		perguntas++;

	}
	double percentagem = ((double) respostascertas / perguntas) * 100;
	cout << "Acertaste em " << percentagem << "% das perguntas. Genial!!!" << endl;
	return 0;
}