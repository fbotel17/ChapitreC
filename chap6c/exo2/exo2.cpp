#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <stdio.h>
#define SIZE 15

using namespace std;

typedef struct point
{
	float longitude;
	float latitude;
}fiche;


int main(int argc, char** argv)
{
	point coordonnee[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "entrez votre longitude "<< i+1 << " : ";
		cin >> coordonnee[i].longitude;

		cout << "entrez votre latitude "<<i+1<<" : ";
		cin >> coordonnee[i].latitude;
		cout << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << endl << "logitude "<<i<<" : " << coordonnee[i].longitude <<" degres" << endl;
		cout << "latitude " << i << " : " << coordonnee[i].latitude <<" degres"<< endl;
	}

	return 0;
}

