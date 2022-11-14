#define _NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>



using namespace std;


int main(int argc, char ** argv)
{
	int occurences[27];

	for (int i = 0; i < 27; i++)
	{
		occurences[i] = 0;
	}

	char str[100];
	cout << "ecrire une phrase : " << endl;
	fgets(str, 99, stdin);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			occurences[str[i] - 'a']++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			occurences[str[i] - 'A']++;
		}
		else if (str[i] == ' ')
		{
			occurences[26]++;
		}
	}

	for (int i = 0; i < 27; i++)
	{
		if (i < 26)
		{
			printf("Il y a %d %c\n", occurences[i], i + 'A');
		}
		else
		{
			printf("Il y a %d espaces\n", occurences[i]);
		}
	}

	return 0;
}


/*
int main(int argc, char** argv)
{
	char lettre='a';
	int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
	char str[100];
	char occurence;
	cout << "écrire une phrase : " << endl;
	fgets(str, 100, stdin);
	int ia=0 ;
	ia = strlen(str);
	int ja=0;
	do
	{
		char lettre = 'a';
		if (str[ja] == lettre++)
		{
			a += 1;
		}
		if (str[ja] == lettre++)
		{
			b += 1;
		}
		if (str[ja] == lettre++)
		{
			c += 1;
		}
		if (str[ja] == lettre++)
		{
			d += 1;
		}
		if (str[ja] == lettre++)
		{
			e += 1;
		}
		if (str[ja] == lettre++)
		{
			f += 1;
		}
		if (str[ja] == lettre++)
		{
			g += 1;
		}
		if (str[ja] == lettre++)
		{
			h += 1;
		}
		if (str[ja] == lettre++)
		{
			i += 1;
		}
		if (str[ja] == lettre++)
		{
			j += 1;
		}
		if (str[ja] == lettre++)
		{
			k += 1;
		}
		if (str[ja] == lettre++)
		{
			l += 1;
		}
		if (str[ja] == lettre++)
		{
			m += 1;
		}
		if (str[ja] == lettre++)
		{
			n += 1;
		}
		if (str[ja] == lettre++)
		{
			o += 1;
		}
		if (str[ja] == lettre++)
		{
			p += 1;
		}
		if (str[ja] == lettre++)
		{
			q += 1;
		}
		if (str[ja] == lettre++)
		{
			r += 1;
		}
		if (str[ja] == lettre++)
		{
			s += 1;
		}
		if (str[ja] == lettre++)
		{
			t += 1;
		}
		if (str[ja] == lettre++)
		{
			u += 1;
		}
		if (str[ja] == lettre++)
		{
			v += 1;
		}
		if (str[ja] == lettre++)
		{
			w += 1;
		}
		if (str[ja] == lettre++)
		{
			x += 1;
		}
		if (str[ja] == lettre++)
		{
			y += 1;
		}
		if (str[ja] == lettre++)
		{
			z += 1;
		}
		ja++;
	} while (ja != strlen(str));
	
	lettre = 'a';
	
	cout << lettre++ << " : ";
	cout << a << endl;
	cout << lettre ++ << " : ";
	cout << b << endl;
	cout << lettre++ << " : ";
	cout << c << endl;
	cout << lettre++ << " : ";
	cout << d << endl;
	cout << lettre++ << " : ";
	cout << e << endl;
	cout << lettre++ << " : ";
	cout << f << endl;
	cout << lettre++ << " : ";
	cout << g << endl;
	cout << lettre++ << " : ";
	cout << h << endl;
	cout << lettre++ << " : ";
	cout << i << endl;
	cout << lettre++ << " : ";
	cout << j << endl;
	cout << lettre++ << " : ";
	cout << k << endl;
	cout << lettre++ << " : ";
	cout << l << endl;
	cout << lettre++ << " : ";
	cout << m << endl;
	cout << lettre++ << " : ";
	cout << n << endl;
	cout << lettre++ << " : ";
	cout << o << endl;
	cout << lettre++ << " : ";
	cout << p << endl;
	cout << lettre++ << " : ";
	cout << q << endl;
	cout << lettre++ << " : ";
	cout << r << endl;
	cout << lettre++ << " : ";
	cout << s << endl;
	cout << lettre++ << " : ";
	cout << t << endl;
	cout << lettre++ << " : ";
	cout << u << endl;
	cout << lettre++ << " : ";
	cout << v << endl;
	cout << lettre++ << " : ";
	cout << w << endl;
	cout << lettre++ << " : ";
	cout << x << endl;
	cout << lettre++ << " : ";
	cout << y << endl;
	cout << lettre++<<" : ";
	cout << z << endl;

	return 0;
}*/