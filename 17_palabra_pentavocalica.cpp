// Ejercicio 17: Comprobar si contiene todas las vocales.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include<string>
using namespace std;


void caso() {
	string s;
	cin >> s;
	bool a, e, i2, o, u;
	a = false;
	e = false;
	i2 = false;
	o = false;
	u = false;
	for (int i = 0; i < s.size(); i++) {
		char c = s[i];
		if (c == 'a') {
			a = true;
		}
		if (c == 'e') {
			e = true;
		}
		if (c == 'i') {
			i2 = true;
		}
		if (c == 'o') {
			o = true;
		}
		if (c == 'u') {
			u = true;
		}
	}

	if (a && e && i2 && o && u) {
		cout << "SI" << '\n';
	}
	else {
		cout << "NO" << '\n';
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