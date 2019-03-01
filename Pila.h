#pragma once

class Pila
{
	private:
		int *a;
		int p;
		int n;

	public:
		Pila(int);
		~Pila();
		void limpiar();
		bool vacia();
		bool llena();
		void meter(int);
		int sacar();

};