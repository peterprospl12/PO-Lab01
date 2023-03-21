#include <iostream>
#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"
#include "Stozek.h"

using namespace std;


int main() {


	Stozek s1;
	cout << "Tworzaca " << s1.Tworzaca() << endl;
	cout << "PPB " << s1.PPB() << endl;
	cout << "PPC "<< s1.PPC() << endl;

	Bryla* sto = new Stozek(5, 10);
	
	cout << "Tworzaca " << sto->Tworzaca() << endl;
	cout << "PPB " << sto->PPB() << endl;
	cout << "PPC " << sto->PPC() << endl;

	delete sto;
	return 0;
}
