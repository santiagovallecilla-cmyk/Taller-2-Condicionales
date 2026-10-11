#include <iostream>

using namespace std;

int main() {
    int anio;

    cout << "Ingrese un año entero: ";
    cin >> anio;

    // Validación: el año debe ser positivo
    if (anio <= 0) {
        cout << "Error: El año debe ser un número positivo." << endl;
    } else {
        // Regla del año bisiesto
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            cout << anio << " es un año bisiesto." << endl;
        } else {
            cout << anio << " no es un año bisiesto." << endl;
        }
    }

    return 0;
}