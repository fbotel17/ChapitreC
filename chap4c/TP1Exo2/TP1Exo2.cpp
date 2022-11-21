#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
	int *adr_deb;
	int temp;

	adr_deb = (int*)malloc(6 * sizeof(int));
	for (int i = 0; i < 6; i++)
	{
		cout <<endl<< "entrez valeur " << i << " du tableau : ";
		cin >> *(adr_deb + i);
	}
	for (int i = 0; i < 6; i++)
	{
		cout << *(adr_deb+i) << ", ";
	}
	cout << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (*(adr_deb + j) > *(adr_deb + j +1))
			{
				temp = *(adr_deb + j);
				*(adr_deb + j) = *(adr_deb + j + 1);
				*(adr_deb + j +1) = temp;
			}
		}
	}
	cout << " Le tableau trie est : [";
	for (int i = 0; i < 5; i++)
	{
		cout << *(adr_deb + i) << ", ";
	}
	cout << *(adr_deb + 5) <<"]";

	return 0;
}