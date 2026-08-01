// Ejercicio 12: Puntuación de Jorge y Ana
// Autor: Marta simó Álvarez.

#include<iostream>

using namespace std;

void CasoResuelto(){
	int a, b, c, d, Jorge, Ana;
	cin >> a >> b >> c >> d;
	Jorge = a + b;
	Ana = c + d;
	if (Jorge > Ana) {
		cout << "JORGE " << Jorge << " ANA " << Ana;
	}
	if (Ana > Jorge) {
		cout << "ANA " << Ana << " JORGE " << Jorge;
	}
	if (Ana == Jorge) {
		cout << "EMPATE " << a + b;
	}

}

int main() {
	int numCasos;
	cin >> numCasos;
	for (int i = 0; i < numCasos; i++) {
		CasoResuelto();
		cout << '\n';
	}
	return 0;
}