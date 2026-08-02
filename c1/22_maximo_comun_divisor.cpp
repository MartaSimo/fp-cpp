// Ejercicio 22: Máximo común divisor.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include<string>

using namespace std;

void caso(){
	int a, b, mcd;
	cin >> a >> b;
	while (a != 0 && b != 0) {
		while (b > 0) {
			int aux;
			aux = b;
			b = a % b;
			a = aux;
		}
		if (b == 0) {
			mcd = a;
		}
		cout << mcd << '\n';
		cin >> a >> b;
	}
}

int main() {
	caso();
	return 0;
}