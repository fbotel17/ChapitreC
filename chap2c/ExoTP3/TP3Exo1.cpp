#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include<conio.h>
#include <tchar.h>

using namespace std;

int main(int argc, char** argv)
{
	char str[10];
	cout << "quel mot voulez vous entrer ? : " << endl;
	cin >> str;
	int i;
	i = strlen(str);
	do
	{
		cout << str[i - 1];
		i=i-1;
	} while (i > 0);



	return 0;
}