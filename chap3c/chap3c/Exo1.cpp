#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;


long valAbsol(int a)
{
	int result = 0;
	if (a < 0)
	{
		result = a / -1;
	}
	else
	{
		result = a;
	}
	cout << "la valeur absolue de "<<a<<" est : "<< result;
	return result;

}

int main()
{
	int a = 0;
	cout << "entrer un nombre : " << endl;
	cin >> a;
	valAbsol(a);
}
