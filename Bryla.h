#pragma once
#include <iostream>

class Bryla {
protected:
	virtual void Wypisz(std::ostream& out) const = 0;
	friend std::ostream& operator<<(std::ostream& os, const Bryla&
		figura);
public:
	virtual double PPC() = 0;
	virtual double Tworzaca() = 0;
	virtual double PPB() = 0;
	virtual ~Bryla();
};

