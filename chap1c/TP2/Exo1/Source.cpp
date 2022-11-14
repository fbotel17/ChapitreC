#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "a" << endl;
	cin >> a;
	cout << "b" << endl;
	cin >> b;
	for (int i = 0; i<a; i++) 
	{
		 c += b;
	}
	cout << c;

	return 0;
}