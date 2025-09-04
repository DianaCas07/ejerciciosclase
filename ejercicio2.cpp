#include <iostream>
using namespace std;

void promedioAlumnos(int notas[5][5], float promedios[5]) {
    for (int i = 0; i < 5; i++) {
        float suma = 0;
        for (int j = 0; j < 5; j++) {
            suma += notas[i][j];
        }
        promedios[i] = suma / 5;
    }
}

void promedioMaterias(int notas[5][5], float promedios[5]) {
    for (int j = 0; j < 5; j++) {
        float suma = 0;
        for (int i = 0; i < 5; i++) {
            suma += notas[i][j];
        }
        promedios[j] = suma / 5;
    }
}

int main() {
    int notas[5][5];
    float promAlumnos[5];
    float promMaterias[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nAlumno " << i + 1 << ":" << endl;
        for (int j = 0; j < 5; j++) {
            cout << "  Nota de la materia " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    promedioAlumnos(notas, promAlumnos);
    promedioMaterias(notas, promMaterias);

    cout << "Promedios de los alumnos: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << ": " << promAlumnos[i] << endl;
    }

    cout << "Promedio de las materias: " << endl;
    for (int j = 0; j < 5; j++) 

    return 0;
}
