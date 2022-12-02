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

	fichier = fopen("source.txt", "r+");

	if (fichier != NULL)
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
		}
		for (int i = 0; i < compteur; i++)
		{
			cout << c[i];
		}
	}
	else
	{
		// On affiche un message d'erreur si on veut
		printf("Impossible d'ouvrir le fichier test.txt");
	}

	fclose(fichier);
	
	return 0;


	
	
}