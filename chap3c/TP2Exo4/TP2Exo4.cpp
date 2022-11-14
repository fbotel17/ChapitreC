#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int lire(int *tab)
{
	cout << "entrez maximum 20 valeur, entrez -0 pour arreter avant : " << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> tab[i];
		if (tab[i] == -0)
		{
			tab[i] = '\0';
			break;
		}
	}
	return 0;
}

int indice_min(int *tab, int temp)
{
	int i = 0;
	int place;
	int temp;
	int minI = tab[0];
	while (tab[i] != '\0')
	{
		if (tab[i] <= minI)
		{
			minI = tab[i];
			place = i;
		}
		i++;
		temp++;
	}
	cout <<"le minimum est "<<minI<<" a la "<< place+1<<" eme place du tableau"<<endl;

	return minI;
}

int trier(int *tab, int SIZE)
{
	int i, j, tmp;
	while (tab[i] != '\0')
	{
		while (tab[i] != '\0')
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	while (tab[i] != '\0')
	{
		printf("%4d", tab[i]);
		i++;
	}
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", tab[i]);
	}
	return 0;
}


int main()
{
	int tab[20];
	int tabTrier[20];
	lire(tab);
	indice_min(tab, temp);
	trier(tab, 20);
	return 0;
}