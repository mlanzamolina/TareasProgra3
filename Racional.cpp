#include "Racional.h"
#include <iostream>
using std::cout;
Racional::Racional(void):numerador(1), denominador(1)
{

}

Racional::Racional(int _numerador, int _denominador) :numerador(_numerador), denominador(_denominador)
{

}
void Racional::imprimirFraccion(void) 
{
	reducir();
	if (numerador==0 && denominador==0)
	{
		cout << "\nresultado indefinido\n";
		return;
	}
	else if (numerador!=0&&denominador==0)
	{
		cout << "\nNo se puede dividir entre 0\n";
		return;
	}
	cout << numerador << "/" << denominador << "\n";
	
}
void Racional::imprimirFlotante(void) 
{
	reducir();
	if (numerador == 0 && denominador == 0)
	{
		cout << "\nresultado indefinido\n";
		return;
	}
	else if (numerador != 0 && denominador == 0)
	{
		cout << "\nNo se puede dividir entre 0\n";
		return;
	}
	
	cout << (float(numerador) / float(denominador)) << "\n";
}
int Racional::getMenorOperando() 
{
	return (numerador < denominador ? numerador : denominador);

}
void Racional::reducir(void) 
{
	for (int i = 2; i <= getMenorOperando(); i++)
	{
		if (numerador%i==0&&denominador%i==0)
		{
			this->numerador = this->numerador / i;
			this->denominador = this->denominador / i;
			i = 1;
		}
	}
}
Racional Racional::sumar(Racional fraccion) {
	Racional resultado;
	if (fraccion.denominador == this->denominador)
	{
		resultado.setNumerador(this->numerador + fraccion.numerador);
		resultado.setDenominador(this->denominador);
	}
	else
	{
		resultado.setNumerador((this->numerador*fraccion.denominador) + (this->denominador*fraccion.numerador));
		resultado.setDenominador(this->denominador * fraccion.denominador);

	}
	return resultado;
}
Racional Racional::resta(Racional fraccion) {
	Racional resultado;
	if (fraccion.denominador == this->denominador)
	{
		resultado.setNumerador(this->numerador - fraccion.numerador);
		resultado.setDenominador(this->denominador);
	}
	else
	{
		resultado.setNumerador((this->numerador*fraccion.denominador) - (this->denominador*fraccion.numerador));
		resultado.setDenominador(this->denominador * fraccion.denominador);

	}
	return resultado;
}
void Racional::setNumerador(int _numerador) {
	this->numerador = _numerador;

}

void Racional::setDenominador(int _denominador) {
	this->denominador = _denominador;

}

Racional Racional::dividir(Racional fraccion) {

	Racional resultado;

	resultado.setNumerador(fraccion.denominador*this->numerador);
	resultado.setDenominador(fraccion.numerador*this->denominador);

	return resultado;
}

Racional Racional::multiplicar(Racional fraccion) {

	Racional resultado;

	resultado.setNumerador(fraccion.numerador*this->numerador);
	resultado.setDenominador(fraccion.denominador*this->denominador);

	return resultado;

}