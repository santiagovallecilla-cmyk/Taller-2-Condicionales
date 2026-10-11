#include <iostream>

using namespace std;

int main() {
    double saldo;

    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;

    if (saldo < 0) {
        cout << "Error: El saldo no puede ser negativo." << endl;
    } else {
        int opcion;
        cout << "Menu: 1. Consultar | 2. Retirar | 3. Consignar" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Saldo actual: " << saldo << endl;
        } else if (opcion == 2) {
            double retiro;
            cout << "Ingrese monto a retirar: ";
            cin >> retiro;
            if (retiro > 0 && retiro <= saldo) {
                saldo = saldo - retiro;
                cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
            } else {
                cout << "Error: Monto invalido o supera el saldo." << endl;
            }
        } else if (opcion == 3) {
            double consignacion;
            cout << "Ingrese monto a consignar: ";
            cin >> consignacion;
            if (consignacion > 0) {
                saldo = saldo + consignacion;
                cout << "Consignacion exitosa. Nuevo saldo: " << saldo << endl;
            } else {
                cout << "Error: El monto debe ser positivo." << endl;
            }
        } else {
            cout << "Opcion no valida." << endl;
        }
    }

    return 0;
}