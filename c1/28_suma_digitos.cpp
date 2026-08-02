// Ejercicio 28: Suma de dígitos coincidentes.
// Autor: Marta Simó Álvarez.

#include<iostream>

using namespace std;

int sumaDigitos(int n) {
	int a = 0, b = 0;
	while (n >= 10) {
		b = n % 10;
		n /= 10;
		a += b;
	}
	a += n;
	return a;
}

void caso() {
	int casos,valor,sumaEntrada;
	cin >> casos>>valor;
	sumaEntrada=sumaDigitos(valor);
	for (int j = 0; j < casos; j++) {
		int b;
		cin >> b;
		if (sumaDigitos(b) == sumaEntrada) {
			cout << b << ' ';
		}
	}
	cout << '\n';
}

int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) caso();
	return 0;
}