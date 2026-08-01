// Ejercicio 13: Calcular máximo y mínimo.
// Autor: Marta Simó Álvarez.

#include<iostream>

using namespace std;

void casoResuelto() {
	int n;
	cin >> n;
	int a, max, min;
	cin >> a;
	max = a;
	min = a;
	for (int i = 1; i < n; i++) {
		int b;
		cin >> b;
		if (b > max) {
			max = b;
		}
		else {
			if (b < min) {
				min = b;
			}
		}

	}
	cout << max << ' ' << min;
}


int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		casoResuelto();
		cout << '\n';
	}
	return 0;
}