#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

void inverse(char *ch)
{
	int i;
	i = strlen(ch);
	do
	{
		cout << ch[i - 1];
		i = i - 1;
	} while (i > 0);
}

int main()
{
	char ch[100];
	cout << "quel mot voulez vous entrer ? : " << endl;
	fgets(ch, 100, stdin);
	inverse(ch);
	return 0;
}