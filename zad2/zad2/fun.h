#pragma once

#include <iostream>
#include <string>
using namespace std;

class point;
class circle;


bool kolo(const circle*, const point*);
double pobierz(string, bool);

class point {
	double ux;
	double uy;
public:
	point() {
		ux = pobierz("wspolrzedna punktu x", false);
		uy = pobierz("wspolrzedna punktu y", false);
	}
	friend bool kolo(const circle*, const point*);
};


class circle {
	double cx;
	double cy;
	double r;
public:
	circle() {
		cx = pobierz("wspolrzedna punktu x kola", false);
		cy = pobierz("wspolrzedna punktu y kola", false);
		r = pobierz("dlugosc promienia kola", true);
	}
	friend bool kolo(const circle*, const point*);


};
