#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a = 0;
	cout << "quell est le poids de votre lettre : " << endl;
	cin >> a;
	if (a < 20) {
		cout << "le prix est 3.00 frs";
	}
	
	else if (a > 19 && a < 50) {
		cout << "le prix est 3.95 frs";
	}
	else if (a > 49) {
		cout << "le prix est 5.90 frs";
	}

	return 0;
}