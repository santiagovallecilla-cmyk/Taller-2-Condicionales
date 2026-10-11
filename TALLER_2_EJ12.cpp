#include <iostream>

using namespace std;

int main() {
    double ingreso, deuda, capacidad;
    int edad, historial;

    cout << "=== EJERCICIO 12: RIESGO CREDITICIO ===\n\n";

    cout << "Ingrese sus ingresos mensuales: ";
    cin >> ingreso;
    cout << "Ingrese sus deudas mensuales: ";
    cin >> deuda;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Tiene historial crediticio? (1 para si, 0 para no): ";
    cin >> historial;

    if (ingreso <= 0) {
        cout << "Ingresos invalidos.\n";
    } else {
        capacidad = ingreso - deuda;
        cout << "Su capacidad de pago es: " << capacidad << "\n";

        if (deuda > ingreso) {
            cout << "Nivel de riesgo: Alto (Deudas superan ingresos)\n";
        } else {
            if (edad < 25) {
                cout << "Nivel de riesgo: Medio\n";
            } else {
                if (historial == 1) {
                    cout << "Nivel de riesgo: Bajo\n";
                } else {
                    cout << "Nivel de riesgo: Medio\n";
                }
            }
        }
    }

    return 0;
}