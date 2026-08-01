// Ejercicio 19: Invertir cadena y convertir a mayúsculas.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include<string>

using namespace std;


void caso() {
	string t, r;
	r = "";
	getline(cin, t);
	for (int i = t.size()-1; i >= 0; i--) {
		t[i] = toupper(t[i]);
		r.push_back(t[i]);
	}
	cout << r.size() << ' ' << r << '\n';
}


int main() {
	int numcasos;
	cin >> numcasos;
	string s;
	getline(cin, s);
	for (int j = 0; j < numcasos; j++) {
		caso();
	}
	return 0;
}