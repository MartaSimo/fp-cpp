// Ejercicio 33: Criba de Eratóstenes (Números primos).
// Autor: Marta Simó Álvarez.

#include<iostream>

using namespace std;
const int MAX = 100000;

void caso() {
	bool a[MAX];
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		a[i] = true;
	}
	for (int i = 2; i <= n; i++) {
		if (a[i] == true) {
			for (int j = 2; i * j <= n; ++j) a[i * j] = false;
			cout << i << '\n';
		}
	}
}

int main() {
	caso();
	return 0;
}