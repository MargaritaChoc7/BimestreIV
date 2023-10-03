#include <iostream>
using namespace std;

int main() {
    const int numAlumnos = 5;
    const int numCalificaciones = 7;
    double calificaciones[numAlumnos][numCalificaciones];
    double promedios[numAlumnos];

    
    for (int i = 0; i < numAlumnos; i++) {
        cout << "Ingrese las 7 calificaciones para el alumno " << i + 1 << ":\n";
        for (int j = 0; j < numCalificaciones; j++) {
            cout << "Calificación " << j + 1 << ": ";
            cin >> calificaciones[i][j];
        }
    }

    
    for (int i = 0; i < numAlumnos; i++) {
        double suma = 0;
        for (int j = 0; j < numCalificaciones; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = suma / numCalificaciones;
    }

    
    for (int i = 0; i < numAlumnos; i++) {
        cout << "Promedio del alumno " << i + 1 << ": " << promedios[i] << " - ";
        if (promedios[i] == 100) {
            cout << "Excelente!";
        } else if (promedios[i] >= 90 && promedios[i] <= 99) {
            cout << "Muy bien";
        } else if (promedios[i] >= 80 && promedios[i] <= 89) {
            cout << "Bien";
        } else if (promedios[i] >= 70 && promedios[i] <= 79) {
            cout << "Hay que mejorar";
        } else {
            cout << "Reprobado";
        }
        cout << endl;
    }

    return 0;
}

