#include <iostream>

using namespace std;

int main() {
    double peso, estatura, imc;

    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese la estatura en metros: ";
    cin >> estatura;

    // Validación: el peso y la estatura deben ser mayores que cero
    if (peso <= 0 || estatura <= 0) {
        cout << "Error: El peso y la estatura deben ser mayores que cero." << endl;
    } else {
        // Cálculo del IMC
        imc = peso / (estatura * estatura);

        cout << "Su IMC es: " << imc << endl;

        // Clasificación según los rangos establecidos
        if (imc < 18.5) {
            cout << "Clasificacion: Bajo peso" << endl;
        } else if (imc < 25.0) {
            cout << "Clasificacion: Normal" << endl;
        } else if (imc < 30.0) {
            cout << "Clasificacion: Sobrepeso" << endl;
        } else {
            cout << "Clasificacion: Obesidad" << endl;
        }
    }

    return 0;
}