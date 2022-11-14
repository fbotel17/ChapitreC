#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "a : "<< endl;
	cin >> a ;
	cout << "b : " << endl;
	cin >> b ; 
	cout << "c : " << endl;
	cin >> c;
	if (a < c) {
		if (a < b) {
			cout << a << "; " << b << "; " << c << endl;
		}
		else
			cout << b << "; " << a << "; " << c << endl;
	}
	else if (b < a) {
		if (b < c) {
			cout << b << "; " << c << "; " << a << endl;
		}
		else
			cout << c << "; " << b << "; " << a << endl;
	}
	else if (a < b) {
		if (a < c) {
			cout << a << "; " << c << "; " << b << endl;
		}
		else
			cout << c << "; " << a << "; " << b << endl;
	}

	return 0;

}