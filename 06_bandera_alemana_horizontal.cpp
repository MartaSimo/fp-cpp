// Ejercicio 06: Bandera alemana (horizontal).
// Autor: Marta Simó Álvarez

#include <iostream>


void resuelveCaso() {

    // Lectura de los datos y solucion del problema
    int x, y;
    std::cin >> x >> y;
    y = y / 3;

    for (int f = 0; f < y; f++) {
        for (int i = 0; i < x; i++) {
            std::cout << 3;
        }
        std::cout << '\n';
    }

    for (int f = 0; f < y; f++) {
        for (int i = 0; i < x; i++) {
            std::cout << 5;
        }
        std::cout << '\n';
    }

    for (int f = 0; f < y; f++) {
        for (int i = 0; i < x; i++) {
            std::cout << 7;
        }
        std::cout << '\n';
    }


}

int main() {
    int numCasos;
    std::cin >> numCasos; // lectura del número de casos
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); // LLamada a la función para tratar cada caso
    }
    return 0;
}
