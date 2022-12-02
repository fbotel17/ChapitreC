#define _CRT_SECURE_NO_WARNINGS
#define TAILLE_MAX 1000
#include <iostream>
#include <stdio.h>

using namespace std;


long tailleFichier(FILE * fichier)
{
	long taille = 0;
	fseek(fichier, 0L, SEEK_END);
	taille = ftell(fichier);
	return taille;
}


int main()
{
	char c[TAILLE_MAX];

	int compteur;
	int taille;

	FILE * fichier = NULL;
	FILE * fichier2 = NULL;
	FILE * fichier3 = NULL;

	fichier = fopen("source.txt", "a+");
	fichier2 = fopen("dest1.txt", "a+");
	fichier3 = fopen("dest2.txt", "a+");
	
	if (fichier != NULL and fichier2 != NULL and fichier3 != NULL)
	{
		cout << "la taille du fichier 1 est de " << tailleFichier(fichier) << " octets" << endl;
		fclose(fichier);
		cout << "la taille du fichier 2 est de " << tailleFichier(fichier2) << " octets" << endl;
		fclose(fichier2);
		cout << "la taille du fichier 3 est de " << tailleFichier(fichier3) << " octets" << endl;
		fclose(fichier3);
	}
	else
	{
		// On affiche un message d'erreur si on veut
		printf("Impossible d'ouvrir le fichier test.txt");
		fclose(fichier);
		fclose(fichier2);
		fclose(fichier3);
	}

	return 0;




}