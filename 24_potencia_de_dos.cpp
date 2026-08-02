// Ejercicio 24: Siguiente potencia de dos.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include<cmath>
using namespace std;

void caso() {
	int a, potencia = 0, j;
	cin >> a;
	for (j=0; potencia < a;j++) {
		potencia = pow(2, j);
	}
	if (potencia == a)potencia = pow(2, j);
	cout << potencia << '\n';
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		caso();
	}
	return 0;
}