#include "nodo.h"
#include <iostream>
using namespace std;

void agregar(nodo **inicio, int _valor)
{
	if (*inicio == nullptr)
	{
		nodo * nuevo = new nodo;
		nuevo->valor = _valor;
		*inicio = nuevo;
	}
	else {
		nodo * actual = *inicio;

		while (actual->siguiente != 0)
		{
			actual = actual->siguiente;
		}
		nodo * nuevo = new nodo;
		nuevo->valor = _valor;
		actual->siguiente = nuevo;
		nuevo->anterior = actual;
	}
}
void imprimir(nodo **inicio) {

	nodo * actual = *inicio;

	while (true)
	{
		if (actual!=0)
		{
			cout << "[ " << actual->valor << " ]<-->";
			actual = actual->siguiente;
		}
		else 
		{
			cout << "end"<<endl;
			break;
		}
		
		
	}
	
	cout << "\n";
}
nodo * UNION(nodo **head1, nodo **head2)
{
	nodo * newList = 0;
	nodo * actual_uno = *head1;
	nodo * actual_dos = *head2;

	while (actual_uno != 0)
	{
		agregar(&newList, actual_uno->valor);
		actual_uno = actual_uno->siguiente;


	}

	while (actual_dos != 0)
	{
		agregar(&newList, actual_dos->valor);
		actual_dos = actual_dos->siguiente;
	}


	return newList;
}
nodo * INTERSECCION(nodo **headUno, nodo **headDos)
{
	nodo * newList = 0;
	nodo * listUno = *headUno;
	nodo * listDos = *headDos;
	int valor = 0;
	int valorDos = 0;



	while (listUno!=0)
	{
		
		while (listDos!=0)
		{
			if (listUno->valor==listDos->valor)
			{
				agregar(&newList, listDos->valor);

			}
			valorDos = listDos->valor;
			
			listDos = listDos->siguiente;

		}
		listUno = listUno->siguiente;
		listDos = *headDos;
	}
	
	return newList;
}
nodo * DIFERENCIA(nodo **headUno, nodo **headDos)
{
	nodo * newList = 0;
	nodo * listUno = *headUno;
	nodo * listDos = *headDos;
	bool repetido ;
	//verifica si los valores de lista uno estan repetidos y agrega a newlist
	while (listUno != 0) 
	{
		repetido = false;
		while (listDos!=0)
		{
			if (listUno->valor==listDos->valor)
			{
				repetido = true;
			}
			listDos = listDos->siguiente;

		}
		if (!repetido)
		{
			agregar(&newList,listUno->valor);

		}
		listDos = *headDos;
		listUno = listUno->siguiente;
	}
	//verifica si los valores de lista dos estan repetidos y agrega a newlist
	while (listDos != 0)
	{
		repetido = false;
		while (listUno != 0)
		{
			if (listDos->valor == listUno->valor)
			{
				repetido = true;
			}
			listUno = listUno->siguiente;

		}
		if (!repetido)
		{
			agregar(&newList, listDos->valor);

		}
		listUno = *headUno;
		listDos = listDos->siguiente;
	}

	return newList;
}
nodo * COMPLEMENTOLISTADOS(nodo **headUno, nodo **headDos)
{
	nodo * newList = 0;
	nodo * listUno = *headUno;
	nodo * listDos = *headDos;
	bool repetido;
	while (listDos != 0)
	{
		repetido = false;
		while (listUno != 0)
		{
			if (listDos->valor == listUno->valor)
			{
				repetido = true;
			}
			listUno = listUno->siguiente;

		}
		if (!repetido)
		{
			agregar(&newList, listDos->valor);

		}
		listUno = *headUno;
		listDos = listDos->siguiente;
	}

	return newList;
}
nodo * COMPLEMENTOLISTAUNO(nodo **headUno, nodo **headDos)
{
	nodo * newList = 0;
	nodo * listUno = *headUno;
	nodo * listDos = *headDos;
	bool repetido;
	while (listUno != 0)
	{
		repetido = false;
		while (listDos != 0)
		{
			if (listUno->valor == listDos->valor)
			{
				repetido = true;
			}
			listDos = listDos->siguiente;

		}
		if (!repetido)
		{
			agregar(&newList, listUno->valor);

		}
		listDos = *headDos;
		listUno = listUno->siguiente;
	}

	return newList;
}
