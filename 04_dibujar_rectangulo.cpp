// Ejercicio 04: Dibujar un rectángulo.
// Autor: Marta Simó Álvarez.

#include <iostream>

void resuelveCaso() {
    // Declara variables y guarda en ellas los datos de entrada

    int n, m;
    std::cin >> n >> m;

    // Bucle para mostrar el rectangulo
    
    for (int f = 0 ; f < m; f++) {
        for (int i = 0; i < n; i++) {
            std::cout << 1;
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
