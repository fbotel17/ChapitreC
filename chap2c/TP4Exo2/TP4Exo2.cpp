//tri par permutation

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main(int argc, char **argv)
{
	srand(time(NULL));
	int i, j, k, c;
	int N;
	
	cout << "combien d'element dans le tableau ? : " << endl;
	cin >> N;
	int T[100];
	for (i=0; i<N; i++)
	
	for (i = 0; i < N+1; i++) {
		T[i] = rand() % 9999;
		cout << T[i]<<endl;
	}
	
	for (i = 1; i < N+1; i++) {

		if (T[i] < T[i - 1]) { // si l’élément est mal placé

			j = 0;

			while (T[j] < T[i]) j++; // cette boucle sort par j = la nouvelle position de l’élément

			c = T[i]; // ces 2 lignes servent a translater les cases en avant pour pouvoir insérer l’élément a sa nouvelle position
			for (k = i - 1; k >= j; k--) T[k + 1] = T[k];
			T[j] = c; // l'insertion
		}
	}

	cout << endl<<endl;
	for (i = 0; i < N + 1; i++) {
		cout << T[i] << endl;
	}

}