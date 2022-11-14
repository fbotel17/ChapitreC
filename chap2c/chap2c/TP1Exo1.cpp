#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	// 1 : déclarer un tableau de 10 entiers

	int tab[10];

	// 2 : Lire 10 entiers entrés par l'utilisateur

	int size = sizeof(tab) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		cout << "valeur :" << endl;
		cin>> tab[i];
	}
	cout << "tableau : ";
	for (int i = 0; i < size; i++)
	{
		cout << tab[i] << " | ";

	}

	// 3 : Rechercher le + grand et le + petit
	int min = tab[0];
	int max = tab[0];

	int i = 1;
	while (i < size)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}

	// 4 : Afficher le + grand et le + petit
	cout << endl << max << endl;

	cout<< min <<endl;

	return 0;
}