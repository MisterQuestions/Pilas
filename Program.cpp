#include "Pila.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
	Pila f(5);
	for (int i = 1; i <= 7; i++)
		f.meter(i);

	while (!f.vacia())
		cout << f.sacar() << endl;

	system("pause");
}