#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main()
{
	int i = 1;
	int j;
	int nbfois;
	int valeur;
	cout << "table de multiplication de combien en combien ?" << endl;
	cin >> nbfois;
	while (i <= nbfois) {
		cout << i;
		j = 1;
		while (j <= nbfois) {
			valeur = i * j;
			cout << "  " << valeur;
			j++;
		}
		cout << endl;
		i++;
	}
}