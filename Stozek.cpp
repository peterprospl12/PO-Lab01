#include "Stozek.h"
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include "Kolo.h"


using namespace std;
Stozek::Stozek(double r, double h)
	: r(r), h(h)
{
	cout << "Konstruktor Stozka(" << r << "," << h << ")" << endl;
}
Stozek::Stozek()
{
	SetR(1.5);
	SetH(1.5);

}


double Stozek::GetR() const {
	return r;
}
double Stozek::GetH() const {
	return h;
}
void Stozek::SetR(double r) {
	this->r = r;
}
void Stozek::SetH(double h) {
	this->h = h;
}
double Stozek::Tworzaca() {
	return sqrt(r * r + h * h);

}

double Stozek::PPB() {
	return M_PI * r * Tworzaca();
}

double Stozek::PPC() {
	Kolo k1(r);
	return k1.Pole() + PPB();

}
void Stozek::Wypisz(std::ostream& out) const {
	out << "Stozek o bokach " << r << " i " << h << std::endl;
}
Stozek::~Stozek() {
	cout << "Destruktor Stozka(" << r << "," << h << ")" << endl;
}
