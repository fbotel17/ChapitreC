#define _NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{
	char str[100];
	char tab[100];
	cout << "ecrire une phrase : " << endl;
	gets_s(str);
	int i;
	i = strlen(str)-1;
	int j = 0;
	int u = 0;
	while (j != i)
	{
		if (str[j] != ' ')
		{
			tab[u] = str[j];
			u++;
		}


		j++;
	}
	tab[u] = '\0';
	u = 0;
	while (u != strlen(tab))
	{
		cout << tab[u];
		u++;
	}





	return 0;
}