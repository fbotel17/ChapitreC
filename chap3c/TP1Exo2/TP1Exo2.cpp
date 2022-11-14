#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;


void affiche(int *t, int taille)
{	
	cout << "le tableau est represente comme : {";
	for (int i = 0; i < taille; i++)
	{
		cout << t[i]<<"; ";
	}
	cout << "}" << endl;
	for (int i = 0; i < taille; i++)
	{
		cout << "l'element " << t[i] << " est a l'index " << i << endl;
	}

}

int main()
{
	int tab[10] = {1,2,4,8,16,32,64,128,256,512};
	int taille = size(tab);
	affiche(tab, taille);
	
}
