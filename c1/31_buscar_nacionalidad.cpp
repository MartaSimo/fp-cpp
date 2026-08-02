// Ejercicio 31: Búsqueda de nacionalidad en array.
// Autor: Marta Simó Álvarez.
#include<iostream>
#include<string>

using namespace std;
const int TAM = 100000;
using lista = string[TAM];

bool Caso() {
	int num;
	cin >> num;
	if (num == 0) return false;
	else {
		string buscada;
		cin >> buscada;
		cout << buscada;
		lista nacionalidades;
		for (int i = 0; i < num-1; ++i) {
			string pasadas;
			cin >> pasadas;
			nacionalidades[i] = pasadas;
		}
		if (num - 1 >= 0 && nacionalidades[num - 1] != buscada) --num;
		cout << num;
	}
	return true;
}

int main() {
	while(Caso());
	return 0;
}