// ex1.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	cout << " Tempo 1 (horas minutos segundos) ?";
	cin >> h1;
	cin >> m1;
	cin >> s1;
	cout << " Tempo 1 (horas minutos segundos) ?";
	cin >> h2;
	cin >> m2;
	cin >> s2;
	int sum1 = (h1 * 3600) + (m1 * 60) + s1;
	int sum2 = (h2 * 3600) + (m2 * 60) + s2;
	int sum3 = sum1 + sum2;
	int dias = sum3 / (3600 * 24);
	int horas = (sum3 - (dias * 3600 * 24)) / 3600;
	int minutos = (sum3 - (dias * 3600 * 24) - (horas * 3600)) / 60;
	int segundos =  sum3 - (dias *3600 *24) - (horas * 3600) - (minutos * 60);
	cout << "Soma dos tempos: " << dias << " dias, " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos" << endl;


}

