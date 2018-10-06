// ex2.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


bool primo(int n)
{
	bool prim = true;
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
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int n;
	cout << "Que numero quer decompor? ";
	cin >> n;

	for (int x = 2; primo(n) == false;x++)
	{
		if (n % 2 == 0)
		{
			x = 1;
			n /= 2;
			cout << "2 * ";
		}
		else if (n % 3 == 0)
		{
			x = 2;
			n /= 3;
			cout << "3 * ";
		}
		else if (n % 5 == 0)
		{
			x = 4;
			n /= 5;
			cout << "5 * ";
		}
		else if (n % 7 == 0)
		{
			x = 6;
			n /= 7;
			cout << "7 * ";
		}
		else break;
	}
	cout << n << endl;
    return 0;
}


