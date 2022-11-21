#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
	char *carac;
	carac = (char*)malloc(15 * sizeof(char));
	int taille = 0;
	cout << "entrez un mot : ";
	fgets(carac, 15, stdin);

	for (int a = 0; a < strlen(carac)-1; a++)
	{
		cout << *(carac + a);
		printf("  --  addresse : %p\n", carac+a);
	}
	return 0;

	free(carac);
}