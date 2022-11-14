#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

void saisie(int *val, int *nb)
{
	int compteur = 0;
	int i = 0;
	do
	{

		cout << "entrez un nombre different de 0 : (0 pour stop)" << endl;
		cin >> val[compteur];
		if (val[compteur] == 0)
		{
			break;
		}
		compteur++;
		i++;
		if (i == 19)
		{
			val[compteur] = 0;
		}


	} while (compteur != 19);

	*nb = compteur;

}

void afficher(int *val, int nb)
{
	cout << "valeurs du tableau : ";
	for (int i = 0; i < nb + 1; i++)
	{
		cout << val[i] << "; ";
	}
	cout << endl << "il y a " << nb + 1 << " valeurs" << endl;
}

int main()
{
	int val[20], nb;
	saisie(val, &nb);
	afficher(val, nb);
	return 0;
}