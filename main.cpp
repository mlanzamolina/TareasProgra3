#include <iostream>
#include <conio.h>
#include "Racional.h"
using namespace std;

int main()
{
	Racional fraccion1;
	Racional fraccion2(24, 12);
	Racional fraccion3(25, 5);
	Racional fraccion4;
	
	 fraccion2.sumar(fraccion3);

	/*cout << "Fraccion 1: "; fraccion1.imprimirFraccion();
	cout << "Fraccion 2: "; fraccion2.imprimirFraccion();
	cout << "Fraccion 3: "; fraccion3.imprimirFraccion();*/
	 cout << "Fraccion 2: "; fraccion2.imprimirFraccion();
	system("pause");
}