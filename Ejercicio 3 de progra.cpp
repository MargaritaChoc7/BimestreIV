#include <iostream>

int main() {
    const int filas = 5;
    const int columnas = 5;
    int matriz[filas][columnas];

    
    int contadorCeros = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;

  
    std::cout << "Ingresa los elementos de la matriz 5x5:" << std::endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cin >> matriz[i][j];

            
            if (matriz[i][j] == 0) {
                contadorCeros++;
            } else if (matriz[i][j] > 0) {
                contadorPositivos++;
            } else {
                contadorNegativos++;
            }
        }
    }

    
    int filaMaximaSuma = 0;
    int sumaMaxima = 0;

    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; j++) {
            sumaFila += matriz[i][j];
        }

        if (sumaFila > sumaMaxima) {
            sumaMaxima = sumaFila;
            filaMaximaSuma = i;
        }
    }

    
    std::cout << "La fila con la suma máxima es la fila " << filaMaximaSuma + 1 << " con una suma de " << sumaMaxima << std::endl;


    std::cout << "Cantidad de ceros: " << contadorCeros << std::endl;
    std::cout << "Cantidad de números positivos: " << contadorPositivos << std::endl;
    std::cout << "Cantidad de números negativos: " << contadorNegativos << std::endl;

    return 0;
}

