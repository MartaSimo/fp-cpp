// Ejercicio 34: Descomposición en factores primos.
// Autor: Marta Simó Álvarez.
#include<iostream>

using namespace std;
const int MAX = 100000;

void caso() {
	int n,m;
	cin >> n;
	m = n;
	while (n != 0) {
		bool a[MAX];
		for (int i = 2; i <= n; i++) {
			a[i] = true;
		}
		for (int i = 2; i <= n; i++) {
			if (a[i] == true) {
				for (int j = 2; i * j <= n; ++j) a[i * j] = false;
			}
		}
		for (int i = 2; i <= n; i++) {
			while (a[i] == true && m % i == 0) {
				m /= i;
				cout << i << ' ';
			}
		}

		cout << '\n';
		cin >> n;
		m = n;
	}
}

int main() {
	caso();
	return 0;
}