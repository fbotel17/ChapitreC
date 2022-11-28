#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void mot_de_passe(char *mdp)
{
	cout << "entrez votre mot de passe : " << endl;
	for (int i = 0; i < 35; i++)
	{
		mdp[i] = _getch();
		if (mdp[i] == 13)
		{
			mdp[i] = '\0';
			break;
		}
		cout << "*";
	}
	cout << endl;
}

void affiche_mdp(char *mdp)
{
	for (int i = 0; i < strlen(mdp); i++)
	{
		cout << mdp[i];
	}
	
}

int main()
{
	char mdp[35];
	char condi;
	mot_de_passe(mdp);
	cout << "voulez vous afficher le mot de passe ? (y or n) : " << endl;
	cin >> condi;
	if (condi == 'y')
	{
		affiche_mdp(mdp);
	}
	else if(condi == 'n')
	{
		cout << "comme tu veux" << endl;
	}
	else
	{
		cout << "panique pas" << endl;
	}

	
	return 0;
}