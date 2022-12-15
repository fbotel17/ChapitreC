#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct fiche
{
	char nom[20];
	char prenom[20];
	int age;
	char sexe;
}fiche;


int main(int argc, char** argv)
{
	fiche personne1;
	
	cout << "entrez votre nom : ";
	gets_s(personne1.nom, 20);

	cout << "entrez votre prenom : ";
	gets_s(personne1.prenom, 20);

	cout << "entrez votre age : ";
	cin >> personne1.age;

	cout << "entrez votre sexe (m ou f) : ";
	cin >> personne1.sexe;

	cout <<endl<< "nom : "<<personne1.nom<<endl;
	cout << "prénom : "<<personne1.prenom<<endl;
	cout << "age : "<<personne1.age<<endl;
	cout << "sexe : "<<personne1.sexe << endl;

	return 0;
}

