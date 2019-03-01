#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila(int tamanio)
{
	p = 0;
	n = tamanio;
	a = new int[n]; //nuevo arreglo del tamaño especificado
}

Pila::~Pila()
{
	delete []a;

	cout << "Destruyendo pila..." << endl;
}

void Pila::limpiar()
{
	p = 0;
}

bool Pila::vacia()
{
	if (p == 0)
		return true;

	return false;
}

bool Pila::llena()
{
	return (p == n);
}

void Pila::meter(int x)
{
	if (llena())
		cout << "Pila llena..." << endl;
	else
	{
		a[p] = x;
		p++;
	}
}

int Pila::sacar()
{
	if (vacia())
	{
		cout << "Pila vacia..." << endl;
	}
	else
	{
		return a[p - 1]; //No garantizamos que esto pase
	}

	return -1; //Valor "basura" ya que siempre se debe devolver un valor
}
