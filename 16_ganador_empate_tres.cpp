// Ejercicio 16: Ganador o empate entre tres.
// Autor: Marta Simó Álvarez.

#include<iostream>

using namespace std;

void caso() {
	int a, b, c, d, e, f, Jorge, Ana, Amigo;
	cin >> a >> b >> c >> d >> e >> f;
	Jorge = a + b;
	Ana = c + d;
	Amigo = e + f;

	if (Jorge > Ana && Jorge > Amigo) {
		cout << "JORGE " << Jorge;
	}
	else if (Jorge == Ana && Jorge>Amigo) {
		cout << "EMPATE ANA JORGE " << Jorge;
	}
	else if (Ana > Jorge && Ana > Amigo) {
		cout << "ANA " << Ana;
	}
	else if (Ana > Jorge && Ana == Amigo) {
		cout << "EMPATE AMIGO ANA " << Ana;
	}
	else if (Amigo > Ana && Amigo > Jorge) {
		cout << "AMIGO " << Amigo;
	}
	else if (Amigo > Ana && Jorge == Amigo) {
		cout << "EMPATE AMIGO JORGE " << Amigo;
	}
	else if (Ana == Amigo && Amigo == Jorge) {
		cout << "EMPATE AMIGO ANA JORGE " << Amigo;
	}

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