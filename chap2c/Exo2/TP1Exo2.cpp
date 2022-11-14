#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	float t1[10], t2[10];
	int i = 0;
	do
	{
		cout << "entrez valeur :" << endl;
		cin >> t2[i];
		i++;
		
	} while (i < 10);

	

	int j = 0;

	for (int i = 0; i < 10; i++)
	{
		if (t2[i] > 0)
		{
			t1[j] = t2[i];
			j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		cout << t1[i] << " |";
	}
	
	return 0;
}