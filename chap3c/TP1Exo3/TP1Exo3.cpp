#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;


float min(float* tab)
{
	float min;
	min = tab[0];
	for (int i = 0; i < 8; i++)
	{
		if(tab[i]<min)
		{
			min=tab[i];
		}
	}
		
	cout << "le minimum de cette liste est : " << min << endl;
	return min;
}

float max(float* tab)
{
	float max;
	max = tab[0];
	for (int i = 0; i < 8; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
	}

	cout <<"le maximum de cette liste est : "<< max << endl;
	return max;
}

int main()
{
	float liste[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,-34.6 };
	min(liste);
	max(liste);
}
