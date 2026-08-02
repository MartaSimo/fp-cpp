// Ejercicio 14: Máximo y mínimo con posiciones.
// Autor: Marta Simó Álvarez.

#include<iostream>

using namespace std;

void caso() {
	int n;
	cin >> n;
	int a, max, min, pos, pos2;
	cin >> a;
	max = a;
	min = a;
	pos = 1;
	pos2 = 1;
	for (int i = 1; i < n; i++) {
		int b;
		cin >> b;
		if (b > max) {
			max = b;
			pos = i+1;
		}
		if (b <= min) {
			min = b;
			pos2 = i+1;
		}
	}
	cout << max << ' ' << pos << ' ' << min << ' ' << pos2;
}



int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		caso();
		cout << '\n';
	}
	return 0;
}