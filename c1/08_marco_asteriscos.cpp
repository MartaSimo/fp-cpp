// Ejercicio 08: Dibujar marco de asteriscos.
// Autor: Marta Simó Álvarez.

#include <iostream>


void resuelveCaso() {

    // Lectura de los datos y solucion del problema
    int B, H, b, h;
    std::cin>> B>> H>> b>> h;
    int Lad;
    Lad = (B - b) / 2;
    int Bas;
    Bas = (H - h) / 2;

    for (int i = 0; i < Bas; i++) {
        for (int j = 0; j < B; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < Lad; j++) {
            std::cout << '*';
        }
        for (int j = 0; j < b; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j < Lad; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    for (int i = 0; i < Bas; i++) {
        for (int j = 0; j < B; j++) {
            std::cout << '*';
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
