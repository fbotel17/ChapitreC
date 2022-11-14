#include <random>
#include <iostream>

using namespace std;

int main()
{
	int s, n;
	cout << "valeur de n" << endl;
	cin >> n;
	s = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << rand() % 20;
		s += n;
		n -= 1;
	}
	cout << s << endl;

}
