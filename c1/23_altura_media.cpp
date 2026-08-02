// Ejercicio 23: Calcular altura media.
// Autor: Marta Simó Álvarez.

#include<iostream>

using namespace std;

void caso() {
	int h, H, j = 0, media = 0;
	cin >> h;
	cin >> H;
	while (H != 0) {
		j++;
		media += H;
		cin >> H;
	}
	media /= j;
	if (h >= media) {
		cout << "MAYOR\n";
	}
	else {
		cout << "MENOR\n";
	}
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		caso();
	}
	return 0;
}