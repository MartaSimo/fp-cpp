// Ejercicio 21: Subcadena creciente más larga.
// Autor: Marta Simó Álvarez.

#include<iostream>
#include<string>

using namespace std;

void caso() {
	string a, b, c;
	cin >> a;
	while (a != "XXX") {
		int i = 0, max = 1, usados = 0;
		b = " ";
		c = " ";
		while (i < a.size() - 1) {
			if (a[i] < a[i + 1]) {
				b += a[i];
				i += 1;
				if (max <= i - usados)max = i - usados;
			}
			else {
				b += a[i];
				if (b.size() < c.size())b = c;
				c = b;
				b = " ";
				usados = i;
				i += 1;
			}
		}
		if (max <= i - usados) {
			max += 1;
			c = b;
			c += a[i];
		}
		cout << size(a) << ' ' << c.size() - 1 << c << '\n';
		cin >> a;
	}
}


int main() {
	caso();
	return 0;
}