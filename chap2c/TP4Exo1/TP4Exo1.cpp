#define _NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{
	int tab[40];
	int tqt = 0;
	int i, j, tmp;
	for (int i = 0; i != size(tab)-1; i++)
	{
		cout << "rentrer nombre entier, rentrer '-1' pour stopper" << endl;
		cin >> tab[i];
		if (tab[i] == -1)
		{
			break;
			tab[i] = NULL;
		}
		tqt += 1;
	}

	for (i = 0; i < tqt ; i++)
	{
		for (j = 0; j < tqt; j++)
		{
			/* Pour un ordre décroissant utiliser < */
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}
	
	for (int i = 0; i != tqt+1; i++)
	{
		cout << tab[i]<<endl;
	}

}