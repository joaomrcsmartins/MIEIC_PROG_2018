// ex4.8.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

void bubblesort(vector<string> &v)
{
	int veclen = v.size();
	for (int x = veclen; x > 0; x--)
	{
		for (int i = 0; i <= (x-2); i++)
		{
			if (v.at(i) > v.at(i + 1))
			{
				string temp = v.at(i);
				v.at(i) = v.at(i + 1);
				v.at(i + 1) = temp;
			}
		}
	}
}
void readStrVector(vector<string> &v, int nElem)
{
	for (int i = 0; i < nElem; i++)
	{
		cout << " Escreva o " << i++ << "º elemento: ";
		cin >> v[i];
	}
}
int main()
{
	vector <string> v;
	int nElem;
	cout << "Quantos elementos tem o vetor? ";
	cin >> nElem;
	readStrVector(v,nElem);
	bubblesort(v);
	cout << "A sequencia ordenada e: "<<endl;
	int vsize = v.size();
	for (int x = 0; x <vsize ; x++)
	{
		cout << v.at(x) << ", ";
	}
	return 0;
}

