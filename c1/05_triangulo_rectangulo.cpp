// Ejercicio 05: Dibujar un triángulo rectángulo.
// Autor: Marta Simó Álvarez.

#include <iostream>


void resuelveCaso() {

    // Declara una variable y guarda en ella el valor de entrada
    
    int n;
    std::cin >> n;
    // Bucle para mostrar el triangulo

    for (int i = 0; i < n; i++) {
        for (int f = 0; f <= i; f++) {
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
