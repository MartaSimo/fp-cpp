// Ejercicio 11: Conversión de segundos a formato hora.
//Autor: Marta Simó Álvarez.

#include<iostream>
#include<iomanip>

void resuelveCaso() {
    int s, min, h;
    std::cin >> s;
    h = s / 3600;
    min = (s % 3600) / 60;
    s = s - h * 3600 - min * 60;
    std::cout << std::setw(2) << std::setfill('0') << h << ':';
    std::cout << std::setw(2) << std::setfill('0') << min << ':';
    std::cout << std::setw(2) << std::setfill('0') << s << '\n';
}

int main() {
    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso();
    }
    return 0;
}