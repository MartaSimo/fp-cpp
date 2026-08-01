// Ejercicio 02: Suma de una progresión aritmética.
//Autor: Marta Simó Álvarez.

#include <iostream>


void resuelveCaso() {
    // Declara dos variables para guardar los datos de entrada

    int x, y;

    // Obten el valor de las dos variables del teclado

    std::cin >> x >> y;

    // Escribe la expresión que calcula el resultado directamente en la instrucción de salida de datos
    int z;
    z = (y - x+1) * (x + y) / 2;

    std::cout << z << '\n';

}

int main() {
    int numCasos;
    std::cin >> numCasos; // lectura del número de casos
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); // LLamada a la función para tratar cada caso
    }
    return 0;
}

