#pragma once
#ifndef nodo_h
#define nodo_h

struct nodo {
	int valor;
	nodo * siguiente;
	nodo * anterior;

	nodo() {
		valor  - 1;
		siguiente = nullptr;
		anterior = nullptr;
	}

};
void agregar(nodo **, int valor);
void imprimir(nodo ** lista);



nodo * UNION(nodo**, nodo**);
nodo * INTERSECCION(nodo**, nodo**);
nodo * DIFERENCIA(nodo**, nodo**);
nodo * COMPLEMENTOLISTADOS(nodo**, nodo**);
nodo * COMPLEMENTOLISTAUNO(nodo**, nodo**);

#endif // !nodo_h

#pragma once
