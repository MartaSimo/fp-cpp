// Ejercicio 15: Comprobar año bisiesto.
//Autor: Marta Simó Álvarez.

#include<iostream>

using namespace std;

void caso() {
	int year;
	cin >> year;
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 100==0) && (year % 400==0)) {
		cout << "SI";
	}
	else {
		cout << "NO";
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