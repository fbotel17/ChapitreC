#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;


long puiss(int x, int y)
{
	int result = 1;
	for (int i = 0; i < y; i++)
	{
		result = result * x;
	}
	cout << "la puissance de " << x <<" puissance "<< y << " est : " << result;
	return result;

}

int main()
{
	int x = 0;
	int y = 0;

	cout << "entrer valeur de x : " << endl;
	cin >> x;
	cout << "entrer valeur de y : " << endl;
	cin >> y;
	puiss(x, y);
}
