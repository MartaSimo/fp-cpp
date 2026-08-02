// Problema 01: Área de un rectángulo.
//Autor: Marta Simó Álvarez.


#include <iostream>


void resuelveCaso() {

    // Declara dos variables de tipo entero
    int x, y;
    // Lee el valor de las dos variables del teclado con la instrucción std::cin

    std::cin >> x>> y;


    // asigna a la variable area el valor del area del rectangulo
    int area = 0;

    area = x * y;


    // Escribir el resultado
    std::cout << area << '\n';
}

int main() {
    int numCasos;
    std::cin >> numCasos; // lectura del número de casos
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); // LLamada a la función para tratar cada caso
    }
    return 0;
}


