#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;




void saisie(float *aa, float *bb, float *cc)
{
	cout << "entrez a : ";
	cin >> *aa;
	cout << endl << "entrez b : ";
	cin >> *bb;
	cout << endl << "entrez c : ";
	cin >> *cc;

}

float *calcul(float aa, float bb, float cc, int *compteur)
{
	float *nbSolution = 0;
	float delta = 0;
	delta = (bb*bb) - 4 * aa*cc;
	//cout << "delta = " << bb << "^2 - 4 * " << aa << " * " << cc << endl;
	//cout << "delta = " << delta << endl;
	if (delta > 0)
	{
		//cout << "il y a deux resultats" << endl;
		float x1 = (-bb - sqrt(delta)) / (2 * aa);
		float x2 = (-bb + sqrt(delta)) / (2 * aa);
		nbSolution = (float*)malloc(2 * sizeof(float));
		nbSolution[0] = x1;
		nbSolution[1] = x2;
		*compteur = 2;
	}
	else if (delta == 0)
	{
		//cout << "il y a un resultat" << endl;
		float x0 = -bb / (2 * aa);
		nbSolution = (float*)malloc(1 * sizeof(float));
		*nbSolution = x0;
		*compteur = 1;
	}
	if (delta < 0)
	{
		//cout << "il n'y a aucun résultat" << endl;
		nbSolution = NULL;
		*compteur = 0;
	}


	return nbSolution;
}

int main()
{
	float *a, *b, *c, *nbSolution;
	int *compteur;
	a = (float*)malloc(sizeof(float));
	b = (float*)malloc(sizeof(float));
	c = (float*)malloc(sizeof(float));
	compteur = (int *)malloc(sizeof(int));

	saisie(a, b, c);

	
	nbSolution = calcul(*a, *b, *c, compteur);


	if (nbSolution != NULL)
	{

		for (int i = 0; i< *compteur; i++)
		{
			cout << nbSolution[i]<<" ";
		}
		free(nbSolution);

	}

	free(a);
	free(b);
	free(c);
	free(compteur);

}