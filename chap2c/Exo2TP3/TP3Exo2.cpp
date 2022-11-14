#define _NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>



using namespace std;

int main(int argc, char** argv)
{
	char str[100];
	char occurence;
	cout << "ecrire une phrase : " << endl;
	fgets(str, 100, stdin);
	cout << "quel occurence voulez vous chercher ? : " << endl;
	cin >> occurence;
	int i;
	i = strlen(str);
	do
	{
		if (str[i-1] == occurence)
		{
			cout << "la lettre " << occurence << " est a la " << strlen(str)-i << "eme place en partan de la droite" << endl;
		}
		i--;
	} while (str[i] != occurence);



	return 0;
}