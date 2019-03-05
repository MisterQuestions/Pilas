#pragma once

#include <iostream>

using namespace std;

template <class T>
class Pila
{
	private:
		T * a;
		int p;
		int n;

	public:
		Pila(int);
		~Pila();
		void limpiar();
		bool vacia();
		bool llena();
		void meter(T);
		T sacar();

};

template <class T>
Pila<T>::Pila(int tamanio)
{
	p = 0;
	n = tamanio;
	a = new T[n]; //nuevo arreglo del tamaño especificado
}

template <class T>
Pila<T>::~Pila()
{
	delete[]a;

	cout << "Destruyendo pila..." << endl;
}

template <class T>
void Pila<T>::limpiar()
{
	p = 0;
}

template <class T>
bool Pila<T>::vacia()
{
	return (p == 0);
}

template <class T>
bool Pila<T>::llena()
{
	return (p == n);
}

template <class T>
void Pila<T>::meter(T x)
{
	if (llena())
		cout << "Pila llena..." << endl;
	else
	{
		a[p++] = x;
	}
}

template <class T>
T Pila<T>::sacar()
{
	//T x;

	if (vacia())
	{
		cout << "Pila vacia..." << endl;
	}
	else
	{
		return a[--p]; //No garantizamos que esto pase
	}

	//return x; //Valor "basura" ya que siempre se debe devolver un valor
}
