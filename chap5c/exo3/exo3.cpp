#define _CRT_SECURE_NO_WARNINGS
#define TAILLE_MAX 1000
#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
	char c[TAILLE_MAX];

	int compteur;

	FILE * fichier = NULL;
	FILE * fichier1 = NULL;

	fichier = fopen("source.txt", "r+");
	fichier1 = fopen("dest2.txt", "w");

	if (fichier != NULL and fichier1 != NULL)
	{
		// On peut lire et écrire dans le fichier
		for (int i = 0; i < TAILLE_MAX; i++)
		{
			c[i] = (char)getc(fichier);
			if (c[i] == EOF)
			{
				compteur = i;
				break;

			}
			if (c[i] != 'a')
			{
				fputc(c[i], fichier1);
			}
		}
	}
	else
	{
		// On affiche un message d'erreur si on veut
		printf("Impossible d'ouvrir le fichier test.txt");
	}

	fclose(fichier);
	fclose(fichier1);

	return 0;




}