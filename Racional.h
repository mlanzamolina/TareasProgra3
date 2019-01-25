
#ifndef RACIONAL_H
#define RACIONAL_H


class Racional {
private:
	int numerador, denominador;
	void reducir(void);
	int getMenorOperando(void);
public:
	Racional(void);
	Racional(int, int);
	void imprimirFraccion(void);
	void imprimirFlotante(void);

	//operaciones
	void setNumerador(int);
	void setDenominador(int);
	Racional sumar(Racional);
	Racional resta(Racional);
	Racional dividir(Racional);
	Racional multiplicar(Racional);
	//subir github antes de media noche 
};

#endif