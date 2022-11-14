#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
unsigned long long factorielle(unsigned long long a);

using namespace std;

unsigned long long factorielle(unsigned long long a)
{
	if (a != 1)
	{
		a *= factorielle(a - 1);
	}
	return a;

}


int main()
{
	unsigned long long f, x;	cout << "entrez une valeur entiere entre 1 et 8:" << endl;
	cin >> x;
	f = factorielle(x);
	cout << "factoriel de " << x << " egal " << f << endl;
	
	return 0;
}
