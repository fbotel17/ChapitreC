#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int paire(int nbr)
{
	if (nbr % 2 == 0)
	{
		cout << "ce nombre est paire, c'est un multiple de 2" << endl;
	}
	return nbr;
}

int multiple3and6(int nbr)
{
	if (nbr % 3 == 0)
	{
		cout << "ce nombre est un multiple de 3" << endl;
		if(nbr % 6 == 0)
		{
			cout << "ce nombre est également un multiple de 6" << endl;
		}
	}
	return nbr;
}

int main()
{
	int nbr;
	cout << "entrez un nombre entier : " << endl;
	cin >> nbr;
	paire(nbr);
	multiple3and6(nbr);

	return 0;
}