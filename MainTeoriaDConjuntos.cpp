#include "nodo.h"
#include <conio.h>
#include <iostream>
using namespace std;


int main() {
	nodo *inicio = 0;
	nodo *inicio2 = 0;
	//lista uno
	cout << "Lista 1:";
	agregar(&inicio, 4);
	agregar(&inicio, 6);
	agregar(&inicio, 8);
	agregar(&inicio, 2);
	agregar(&inicio, 1);
	agregar(&inicio, 7);
	//imprimir lista uno
	imprimir(&inicio);
	//lista dos
	cout << "Lista 2: ";
	agregar(&inicio2, 11);
	agregar(&inicio2, 7);
	agregar(&inicio2, 3);
	agregar(&inicio2, 1);
	agregar(&inicio2, 9);
	agregar(&inicio2, 8);
	//imprimir lista dos
    imprimir(&inicio2);

	cout << "\n\nUNION\n\n";
	nodo * nueva = UNION(&inicio, &inicio2);
	imprimir(&nueva);
	cout << "\n\nINTERSECCION\n\n";
	nodo * nuevaInter = INTERSECCION(&inicio, &inicio2);
	imprimir(&nuevaInter);
	cout << "\n\nDIFERENCIA\n\n";
	nodo * nueva3 = DIFERENCIA(&inicio,&inicio2);
	imprimir(&nueva3);
	cout << "\n\nCOMPLEMENTO LISTA 1\n\n";
	nodo * nueva4 = COMPLEMENTOLISTAUNO(&inicio, &inicio2);
	imprimir(&nueva4);
	cout << "\n\nCOMPLEMENTO LISTA 2\n\n";
	nodo * nueva5 = COMPLEMENTOLISTADOS(&inicio, &inicio2);
	imprimir(&nueva5);

	_getwch();




}
