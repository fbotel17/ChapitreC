#include <random>
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int s, n;
	s = 0;
	for (int i = 0; i < 30; i++)
	{
		n = (rand() % 20) + 1;
		cout << n << endl;
		s += n;
	}
	cout << s / 30 << endl;
	_getch();
	return 0;
}