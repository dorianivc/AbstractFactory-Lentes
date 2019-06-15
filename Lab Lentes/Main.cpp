#include "LentesMedicados.h"
#include"FactoriaLentesSol.h"
#include "LentesSol.h"
#include "FactoriaLentesMedicados.h"
using namespace std;
int main() {
	FactoriaLentesSol* fabricaLentesSol = new FactoriaLentesSol();
	FactoriaLentesMedicados* fabricaLentesMedicados = new FactoriaLentesMedicados();
	Lentes* l1 = fabricaLentesMedicados->fabricarLenteMedicado('l', true, true);
	cout << "Lente Medicado" << endl;
	cout << l1->toString() << endl << "Precio: "<<l1->getPrecio()<<endl;
	Lentes* l2= fabricaLentesMedicados->fabricarLenteMedicado('n', true, false);
	cout << "Lente Medicado" << endl;
	cout << l2->toString() << endl << "Precio: " << l2->getPrecio() << endl;
	Lentes* l3= fabricaLentesSol->fabricarLenteSol('l', true, true);
	cout << "Lente de Sol" << endl;
	cout << l3->toString() << endl << "Precio: " << l3->getPrecio() << endl;
	Lentes* l4=fabricaLentesSol->fabricarLenteSol('n', false, true);
	cout << "Lente de Sol" << endl;
	cout << l4->toString() << endl << "Precio: " << l4->getPrecio() << endl;
	Lentes* l5= fabricaLentesSol->fabricarLenteSol('l', false, false);
	cout << "Lente de Sol" << endl;
	cout << l5->toString() << endl << "Precio: " << l5->getPrecio() << endl;


	delete l1;
	delete l2;
	delete l3;
	delete l4;
	delete l5;
	cin.get();
	return 0;
}