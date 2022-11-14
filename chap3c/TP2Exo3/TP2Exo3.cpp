#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void minEnMaj(char *str, int compte)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			compte += 1;
		}
		cout << str[i];
	}
	cout << "il y a eu " << compte << " transformation de minuscule en majuscule" << endl;
}

int main()
{
	char str[100];
	int compte = 0;
	cout << "ecrire une phrase : " << endl;
	fgets(str, 100, stdin);
	minEnMaj(str, compte);
	return 0;
}