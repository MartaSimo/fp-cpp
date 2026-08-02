// Ejercicio 25: Primera palabra alfabéticamente.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include <string>
using namespace std;

void caso() {
	int num;
	string a, primera;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int cont = 0;
		cin >> a;
		while (tolower(a[cont]) <= tolower(primera[cont])&&cont<a.size()-1&&cont<primera.size()-1)cont++;
		if (cont==a.size()-1||cont==primera.size()-1||i==0)primera = a;
	}
	cout << primera << '\n';
}

int main() {
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; i++) {
		caso();
	}
	return 0;
}