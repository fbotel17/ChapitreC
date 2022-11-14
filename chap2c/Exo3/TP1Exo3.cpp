#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	float t1[10];
	int i = 0;
	float somme=0;
	do
	{
		cout << "entrez valeur :" << endl;
		cin >> t1[i];
		
		somme += t1[i];
		i++;

	} while (i < 10);
	cout << "somme : " << somme;


	return 0;
}