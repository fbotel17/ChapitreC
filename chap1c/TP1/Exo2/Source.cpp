#include <random>
#include <iostream>

using namespace std;

int main()
{
	int p, q, s;
	cout << "valeur de p" << endl;
	cin >> p;
	cout << "valeur de q" << endl;
	cin >> q;
	s = p * q;
	if (s > 500) {
		s = s * 0.90;
	}
	cout << s << endl;


}