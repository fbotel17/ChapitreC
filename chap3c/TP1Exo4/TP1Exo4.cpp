#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;


int pgcd2nb(int nbr1, int nbr2)
{
	int pgcd = 0;
	for (int i = 1; i <= nbr1 && i <= nbr2; ++i)
	{
		if (nbr1%i == 0 && nbr2%i == 0)
			pgcd = i;
	}

	cout << "PGCD de " << nbr1 << " et " << nbr2 << " = " << pgcd << endl;
	return pgcd;
}

int main()
{
	int nbr1, nbr2;

	cout<< "Entrez premier entier: "<<endl;
	cin >> nbr1;
	cout << "Entrez deuxieme entier: " << endl;
	cin >> nbr2;


	pgcd2nb(nbr1, nbr2);
	return 0;
}