#include <iostream>

int main() {
    const int tamano = 5;
    int arregloOriginal[tamano];
    int arregloMultiplicado[tamano];

    // Leer 5 números y almacenarlos en el arregloOriginal
    std::cout << "Ingresa 5 números:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> arregloOriginal[i];
    }

    // Copiar y multiplicar los números por 2 en el arregloMultiplicado
    for (int i = 0; i < tamano; i++) {
        arregloMultiplicado[i] = arregloOriginal[i] * 2;
    }

    // Mostrar el arregloMultiplicado
    std::cout << "El arreglo multiplicado por 2 es:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        std::cout << arregloMultiplicado[i] << " ";
    }

    return 0;
}


