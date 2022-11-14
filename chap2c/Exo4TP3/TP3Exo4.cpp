#define _NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{
	char str[100];
	cout << "ecrire une phrase : " << endl;
	fgets(str, 100, stdin);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		cout << str[i];
	}
}