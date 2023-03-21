#include <iostream>
#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

void overload(int a) {
	std::cout << "zmienna typu integer" << std::endl;
}

void overload(double a) {
	std::cout << "zmienna typu zmiennoprzecinkowego" << std::endl;
}



int main() {

	Prostokat p1 = Prostokat(2,5);
	std::cout << "Obwod " << p1.Obwod() << std::endl;
	std::cout << "Pole " << p1.Pole() << std::endl;
    std::cout << "Wypisz " << p1;
	
	std::cout << std::endl;
	
	Trojkat *t1 = new Trojkat(3, 4, 5);
	std::cout << "Obwod " << t1->Obwod() << std::endl;
	std::cout << "Pole " << t1->Pole() << std::endl;
	std::cout << "Wypisz " << *t1;
	delete t1;

	std::cout << std::endl;

	Kolo k1(8);
	std::cout << "Obwod " << k1.Obwod() << std::endl;
	std::cout << "Pole " << k1.Pole() << std::endl;
	std::cout << "Wypisz " << k1;

	std::cout << std::endl;

	
	
	
	
	
	
	
	
	FiguraPlaska* arr[3];
	arr[0] = new Prostokat(1, 2);
	arr[1] = new Trojkat(5,10,15);
	arr[2] = new Kolo(15);

	for (int i = 0; i < 3; i++) {
		std::cout << *arr[i] << std::endl;
		std::cout << arr[i]->Obwod() << std::endl;
		std::cout << arr[i]->Pole() << std::endl;
		delete arr[i];
	}

	/*
	* W powy¿szym kodzie mamy klasê abstrakcyjn¹ FiguraPlaska, która zawiera czysto wirtualne funkcje Wypisz(), Pole() i Obwod(). Klasy dziedzicz¹ce po klasie FiguraPlaska musz¹ zaimplementowaæ te funkcje, aby móc zostaæ utworzone.

Klasa Prostokat dziedziczy po FiguraPlaska i nadpisuje funkcje Wypisz(), Pole() i Obwod().

Dziêki temu, ¿e te funkcje w klasie bazowej s¹ zadeklarowane jako wirtualne, a w klasie dziedzicz¹cej s¹ nadpisane, to w czasie wykonania programu, w zale¿noœci od typu obiektu, jaki zosta³ utworzony, zostanie wywo³ana odpowiednia funkcja, czyli funkcja wirtualna zostanie zwi¹zan¹ z odpowiedni¹ implementacj¹ w czasie dzia³ania programu. To w³aœnie nazywane jest polimorfizmem, czyli zdolnoœci¹ do zachowania ró¿nych form w zale¿noœci od typu obiektu.
	*/




	overload(10); // wywo³a overload(int a)
	overload(10.2); // wywo³a overload(double a)
	return 0;
}


/*
class FiguraPlaska {
protected:
	virtual void Wypisz(std::ostream& out) const = 0;
	friend std::ostream& operator<<(std::ostream& os, const FiguraPlaska&
		figura);
public:
	virtual double Pole() = 0;
	virtual double Obwod() = 0;
	virtual ~FiguraPlaska();
};

class Prostokat : public FiguraPlaska {
private:
	double a, b;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Prostokat(double a, double b);
	double GetA() const;
	void SetA(double a);
	double GetB() const;
	void SetB(double b);
	double Obwod() override;
	double Pole() override;

	~Prostokat() override;
};

Dziêki temu, ¿e w klasie FiguraPlaska funkcje takie jak Wypisz, Pole, Obwod s¹ wirtualne mo¿emy je nadpisaæ w klasie dziedziczonej przy u¿yciu override.
Dziêki temu mo¿emy zapewniæ, ¿e wywo³anie funkcji na obiekcie klasy pochodnej bêdzie wykonywa³o w³aœnie tê nadpisan¹ implementacjê, a nie tê z klasy bazowej.



*/