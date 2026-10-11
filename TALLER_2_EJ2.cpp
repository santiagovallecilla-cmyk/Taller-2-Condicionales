#include <iostream>

using namespace std;

int main() {
    double nota1, nota2, nota3, promedio;

    cout << "Ingrese la primera nota (0.0 - 5.0): ";
    cin >> nota1;
    cout << "Ingrese la segunda nota (0.0 - 5.0): ";
    cin >> nota2;
    cout << "Ingrese la tercera nota (0.0 - 5.0): ";
    cin >> nota3;

    if (nota1 < 0.0 || nota1 > 5.0 || nota2 < 0.0 || nota2 > 5.0 || nota3 < 0.0 || nota3 > 5.0) {
        cout << "Error: Alguna de las notas está fuera del rango permitido." << endl;
    } else {
        promedio = (nota1 * 0.30) + (nota2 * 0.30) + (nota3 * 0.40);
        cout << "El promedio ponderado es: " << promedio << endl;

        if (promedio >= 4.5) {
            cout << "Concepto: Excelente" << endl;
        } else if (promedio >= 4.0) {
            cout << "Concepto: Bueno" << endl;
        } else if (promedio >= 3.0) {
            cout << "Concepto: Aceptable" << endl;
        } else {
            cout << "Concepto: Reprobado" << endl;
        }
    }

    return 0;
}