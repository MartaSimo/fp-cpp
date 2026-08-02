// Ejercicio 30: Inversión de signos en array y sumas.
// Autor: Marta Simó Álvarez.

#include<iostream>
using namespace std;

void caso() {
	int numElementos, valorElemento,negativos=0,positivos=0;
	cin >> numElementos;
	const int TAM = 1000;
	using lista = int[TAM];
	lista array;
	for (int i = 0; i < numElementos; i++) {
		cin >> valorElemento;
		if (valorElemento < 0)positivos += valorElemento;
		if (valorElemento > 0)negativos += valorElemento;
		array[i] = -valorElemento;
	}
	cout << negativos << ' ' << positivos << '\n';
	for (int k = 0; k < numElementos; k++) {
		cout << array[k] << ' ';
	}
	cout << '\n';
}

int main() {
	int numCasos;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		caso();
	}
	return 0;
}