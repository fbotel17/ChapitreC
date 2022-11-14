#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main()
{
	int age;
	int cine;
	char sexe;
	char mq;
	string sexe1;
	string macqui;
	int frfood;
	char sport;
	string sport1;
	string qsport;
	string foot = "foot", tennis = "tennis", basket = "basket", judo = "judo", natation = "natation";

	do {
		cout << "age" << endl;
		cin >> age;
	} while (age < 0);

	do {
		cout << "sexe ? (g pour garcon, f pour fille)" << endl;
		cin >> sexe;
	} while (sexe != 'g' and sexe != 'f');

	switch (sexe)
	{
	case 'g': sexe1 = "garcon";
		break;
	case 'f': sexe1 = "fille";
		break;
	}

	do {
		cout << "frequence a laquelle tu vas au cinema" << endl;
		cin >> cine;
	} while (cine < 0);

	do {
		cout << "Macdo(m) ou Quick(q) ?" << endl;
		cin >> mq;
	} while (mq != 'q' and mq != 'm');

	switch (mq)
	{
	case 'm': macqui = "MacDo";
		break;
	case 'q': macqui = "Quick";
		break;
	}

	do {
		cout << "A quel frequence y vas tu par mois ?" << endl;
		cin >> frfood;
	} while (frfood < 0);

	do {
		cout << "fais tu du sport" << endl;
		cin >> sport;
	} while (sport != 'o' and sport != 'n');

	switch (sport)
	{
	case 'o': qsport = "pratiques du sport";
		break;
	case 'n': qsport = "ne pratiques pas de sport";
		break;
	}

	if (sport == 'o') {
		do {
			cout << "quel sport fais tu entre foot, tennis, basket, judo, natation (attention à l'orthographe)" << endl << endl;
			cin >> sport1;
		} while (sport1 != foot and sport1 != basket and sport1 != tennis and sport1 != judo and sport1 != natation);
	}

	cout << "tu as " << age << " ans, tu es un(e) " << sexe1 << ", tu vas " << cine << " fois au cinéma par mois, tu preferes le " << macqui << " comme fast food, tu y vas " << frfood << " fois par mois, tu " << qsport;
	if (sport == 'o') {
		cout << " : ce sport est le/la " << sport1 << endl << endl;
	}



}