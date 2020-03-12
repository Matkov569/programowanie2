#include <iostream>
#include <string>
#include "fun.h"


bool kolo(const circle* c, const point* p) {
	double w = sqrt((pow((p->ux - c->cx), 2) + pow((p->uy - c->cy), 2)));
	if (w > c->r) return 0;
	else return 1;
}

double pobierz(string str, bool plus) {
	double var;
	int check;
	do {
		cout << "Podaj " << str << ": ";
		cin >> var;

		if (cin.fail())
		{
			check = 0;
		}
		else {
			check = 1;
		}
		cin.clear();
		cin.ignore(1000, '\n');
		if (plus == 1 && check == 1) {
			if (var <= 0)check = 0;
		}
	} while (check != 1);
	return var;
}
