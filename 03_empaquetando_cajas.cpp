// Ejercicio 03: Empaquetando cajas.
//Autor: Marta Simó Álvarez.

#include <iostream>


void resuelveCaso() {
    // Declara 6 variables: tres para guardar los datos del contenedor
    // y tres para guardar los datos de las cajas

    int A, B, C, a, b, c;

    // Obten del teclado el valor de las 6 variables

    std::cin >> A >> B >> C >> a >> b >> c;
    A = A * 100;
    B = B * 100;
    C = C * 100;

    // Escribe la expresión que calcula el número de cajas directamente en 
    int n, x, y, z;
    x = (A / a);
    y = (B / b);
    z = (C / c);
    n = x * y * z;

    // la instrucción que muestra el resultado

    std::cout << n << '\n';

}

int main() {
    int numCasos;
    std::cin >> numCasos; // lectura del número de casos
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); // LLamada a la función para tratar cada caso
    }
    return 0;
}

