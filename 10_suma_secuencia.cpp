// Ejercicio 10: Suma de una secuencia de enteros.
// Autor: Marta Simó Álvarez.

#include<iostream>

void CasoResuelto() {
	int x, y, z = 0;
	std::cin >> x;
	for (int i = 0; i < x; i++) {
		std::cin >> y;
		z = z + y;
	}
	std::cout << z;
}

int main() {
	int numCasos;
	std::cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		CasoResuelto();
		std::cout << '\n';
	}
	return 0;
}