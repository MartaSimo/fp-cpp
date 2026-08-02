// Ejercicio 26: Diferencia máxima y mínima.
// Autor: Marta Simó Álvarez.

#include <iostream>
using namespace std;

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    int num, min, max, a, b;
    cin >> num;
    cin >> a;
    for (int i = 1; i < num; i++) {
        cin >> b;
        int diferencia;
        if (a > b)diferencia = a - b;
        else diferencia = b - a;
        if (i == 1 || min > diferencia)min = diferencia;
        if (i == 1 || max < diferencia)max = diferencia;
        a = b;
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