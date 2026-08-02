// Ejercicio 32: Punto de equilibrio en array.
// Autor: Marta Simó Álvarez.

#include<iostream>
using namespace std;
const int TAM = 100000;
using tlista = int[TAM];

void caso() {
    int cant, num, dcha = 0, pos;
    cin >> cant;
    tlista array;
    for (int i = 0; i < cant; i++) {
        cin >> num;
        array[i] = num;
    }
    for (pos = cant - 1; pos >= 0 && array[pos] != dcha; pos--)dcha += array[pos];
    if (pos<0)cout << "NO\n";
    else cout << pos << '\n';
}

int main() {
	int numCasos;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		caso();
	}
	return 0;
}