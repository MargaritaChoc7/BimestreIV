#include <iostream>

int main() {
    int matriz[3][3];

    
    std::cout << "Ingresa los elementos de la matriz 3x3:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    
    std::cout << "La diagonal principal de la matriz es:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << matriz[i][i] << " ";
    }

    return 0;
}

