#include <random>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n = 0;
	int c = 0;
	while (n >= 0 && n <= 20) {
		cout << "quelle note" << endl;
		cin >> n;
		if (n >= 10 && n <= 20) {
			c += 1;
		}
	}

	cout << c;

}