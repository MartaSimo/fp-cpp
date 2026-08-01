// Ejercicio 09: Tabla de multiplicar.
// Autor: Marta Simó Álvarez.

#include <iostream>


void resuelveCaso() {

    // Lectura de los datos y solucion del problema
    int x, y;
    std::cin >> x;
    for (int i = 1; i <= 10; i++) {
        y = x * i;
        std::cout << x << " * " << i << " " << '=' << " " << y << '\n';
    }
    std::cout << "---" << '\n';


}

int main() {
    int numCasos;
    std::cin >> numCasos; // lectura del número de casos
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); // LLamada a la función para tratar cada caso
    }
    return 0;
}
