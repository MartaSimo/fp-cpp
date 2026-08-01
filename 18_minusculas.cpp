// Ejercicio 18: Convertir cadena a minúsculas
// Autor: Marta Simó Álvarez

#include<iostream>
#include<string>
using namespace std;


void caso() {
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = tolower(s[i]);
		}
	}
	cout << s << '\n';
}


int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		caso();
	}
	return 0;
	}