#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int arcg, char * argv)
{

	FILE * fichier = NULL;

	char lettre = 'a';

	fichier = fopen("alphabet.txt", "a+");

	if (fichier != NULL)
	{
		cout << "ca marche" << endl;
		for (int i = 0; i < 26; i++)
		{
			fputc(lettre + i, fichier);
		}

	}
	else
	{
		cout << "impossible d'ouvrir le fichier";
	}
}
