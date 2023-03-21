#pragma once

#include "Bryla.h"
#include "Kolo.h"
class Stozek : public Bryla{
private:
	double r, h;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Stozek(double r, double h);
	Stozek();
	double GetR() const;
	void SetR(double r);
	double GetH() const;
	void SetH(double h);
	double PPC() override;
	double Tworzaca();
	double PPB();
	
	~Stozek() override;
};
