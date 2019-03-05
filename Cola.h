#pragma once

#pragma once

#include <iostream>

using namespace std;

template <class T>
class Cola
{
private:
	T * a;
	int p;
	int n;

public:
	Cola(int);
	~Cola();
	void limpiar();
	bool vacia();
	bool llena();
	void meter(T);
	T sacar();

};

template <class T>
Cola<T>::Cola(int tamanio)
{
	p = 0;
	n = tamanio;
	a = new T[n]; //nuevo arreglo del tamaño especificado
}

template <class T>
Cola<T>::~Cola()
{
	delete[]a;

	cout << "Destruyendo Cola..." << endl;
}

template <class T>
void Cola<T>::limpiar()
{
	p = 0;
}

template <class T>
bool Cola<T>::vacia()
{
	return (p == 0);
}

template <class T>
bool Cola<T>::llena()
{
	return (p == n);
}

template <class T>
void Cola<T>::meter(T x)
{
	if (llena())
		cout << "Cola llena..." << endl;
	else
	{
		a[p++] = x;
	}
}

template <class T>
T Cola<T>::sacar()
{
	if (vacia())
	{
		cout << "Cola vacia..." << endl;
	}
	else
	{
		T x = a[0];
		p--;
		int i = 0;

		do
		{
			a[i] = a[i + 1];
			i++;
		} 
		while (i < p);

		return x;
	}
}