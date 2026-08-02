// Ejercicio 29: Contar apariciones de un dígito.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include <string>
using namespace std;

void caso() {
	string digito;
	char buscado;
	int cont = 0;
	cin >> digito >> buscado;
	for (int i = 0; i < digito.size(); i++) {
		if (digito[i] == buscado)cont += 1;
	}
	cout << cont << '\n';
}

int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		caso();
	}
	return 0;
}