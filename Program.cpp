#include "Pila.h"
#include "Cola.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


int main()
{
	Pila<int> f(5);

	for (int i = 1; i <= 7; i++)
		f.meter(i);

	while (!f.vacia())
	{
		cout << f.sacar() << endl;
	}
		

	Pila<string> y(5);

	y.meter("Laishita");
	y.meter("Saludos");
	y.meter("Soy");
	y.meter("El");
	y.meter("Arquero");

	while (!y.vacia())
		cout << y.sacar() << endl;

	Cola<string> l(5);

	l.meter("Laishita");
	l.meter("Saludos");
	l.meter("Soy");
	l.meter("El");
	l.meter("Arquero");

	while (!l.vacia())
		cout << l.sacar() << endl;

	system("pause");
}