// Ejercicio 27: Diferencia máxima y mínima con centinela.
// Autor: Marta Simó Álvarez.


#include <iostream>
using namespace std;

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    int min, max, a, b, diferencia;
    cin >> a;
    cin >> b;
    if (a > b)diferencia = a - b;
    else diferencia = b - a;
	min = diferencia;
	max = diferencia;
    while (b!=0) {
        if (a > b)diferencia = a - b;
        else diferencia = b - a;
        if (min > diferencia)min = diferencia;
        if (max < diferencia)max = diferencia;
        a = b;
        cin >> b;
    }
    cout << max << ' ' << min << '\n';
}

int main() {
    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();
    return 0;
}