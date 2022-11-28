#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
	float *adr1, *adr2;
	adr1 = (float*)malloc(sizeof(float));
	adr2 = (float*)malloc(sizeof(float));

	
	*adr1 = -45.78;
	*adr2 = 678.89;

	cout << "adr1 : " << adr1 << "; contenu: " << *adr1 << endl;
	cout << "adr2 : " << adr2 << "; contenu: " << *adr2 << endl;

	free(adr1);
	free(adr2);

	return 0;
}