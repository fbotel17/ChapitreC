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

float *calcul(float aa, float bb, float cc)
{
	float delta = 0;
	delta = (bb*bb)-4*aa*cc;
	cout << "delta = " << bb << "^2 - 4 * " << aa << " * " << cc<<endl;
	cout << "delta = " << delta << endl;
	if (delta > 0)
	{
		cout << "il y a deux résultats" << endl;
		float x1 = (-bb - sqrt(delta) )/ (2 * aa);
		cout << "x1 = " << x1 << endl;
		float x2 = (-bb + sqrt(delta)) / (2 * aa);
		cout << "x2 = " << x2 << endl;

	}
	else if (delta == 0)
	{
		cout << "il y a un résultat" << endl;
		float x0 = -bb / (2 * aa);
		cout << "x0 = " << x0 << endl;
	}
	if (delta < 0)
	{
		cout << "il n'y a aucun résultat" << endl;
	}


	return 0;
}

int main()
{
	float *a, *b, *c;
	a= (float*)malloc(sizeof(float));
	b = (float*)malloc(sizeof(float));
	c = (float*)malloc(sizeof(float));

	saisie(a, b, c);
	*calcul(*a, *b, *c);
}