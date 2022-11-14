#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float somme = 0;
	float t[3][4];
	float m[3];
	for (int i = 0; i < 3; i++)
	{
		somme = 0;
		for (int j = 0; j < 4; j++)
		{

			cout << "valeur de " << "t[" << i << "][" << j << "]" << endl;
			cin >> t[i][j];
			somme += t[i][j];

		}
		somme = somme / 4;
		m[i] = somme;
		cout << "la moyenne de la ligne " << i + 1 << " est " << m[i] << endl;
	}
	cout << "la somme des éléments de t est :" << somme << endl;
}