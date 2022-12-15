#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#define SIZE 20

using namespace std;

typedef struct noteseninfo/* On définit un type struct */
{
	char nom[10];
	char prenom[10];
	int nbnotes; //permet de stocker le nombre de notes saisies
	float note[50];
}
noteseninfo;


void saisir(noteseninfo * eleve, int * compteur)
{
	char nom1[10];
	char prenom1[10];
	int temp=0;
	cout << "entrez le nom de l'eleve : ";
	cin >> nom1;
	cout << "entrez le prenom de l'eleve : ";
	cin >> prenom1;
	for (int i = 0; i < SIZE; i++)
	{
		if (*nom1 = *eleve[i].nom and *prenom1 == *eleve[i].prenom)
		{
			cout << "entrez votre notes : ";
			cin >> eleve[i].note[compteur[i]];


		}
		else
		{
			
			*eleve[i].nom = *nom1;
			*eleve[i].prenom = *prenom1;
			cout << "entrez une note : ";
			cin >> eleve[i].note[compteur[i]];

		}
	}
	
}


int main(int argc, char** argv)
{
	
	noteseninfo eleve[SIZE];
	int compteur[SIZE];
	int nbMenu;
	*eleve[0].nom = 'test';
	*eleve[0].prenom = 'test';
	do
	{
		cout << "selectionnez une option :" << endl << endl;
		cout << "1 - saisir une note" << endl;
		cout << "2 - afficher eleves et notes" << endl;
		cout << endl << "666 - pour exit" << endl;
		cin >> nbMenu;
		if (nbMenu == 1)
		{
			saisir(eleve, compteur);
		}
	} while (nbMenu != 666);

	return 0;
}

