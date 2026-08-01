// Ejercicio 20: Comprobar letras ordenadas alfabéticamente.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include<string>

using namespace std;

void caso() {
	string a;
	getline(cin, a);
	while (a != "XXX") {
		int i = 0;
		while (i < a.size() - 1 && a[i] < a[i + 1])++i;
		if (i == a.size() - 1) {
			cout << "SI \n";
		}
		else cout << "NO \n";
		getline(cin, a);
	}
}

int main() {
	caso();
	return 0;
}