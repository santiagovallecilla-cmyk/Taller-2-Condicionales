#include <iostream>

using namespace std;

int main() {
    double peso, dist, total;
    int zona, fragil;

    cout << "=== EJERCICIO 11: COTIZACION DE ENVIO ===\n\n";

    cout << "Ingrese el peso del paquete (kg): ";
    cin >> peso;
    cout << "Ingrese la distancia (km): ";
    cin >> dist;
    cout << "Ingrese la zona (1 local, 2 nacional): ";
    cin >> zona;
    cout << "Es fragil? (1 para si, 0 para no): ";
    cin >> fragil;

    if (peso <= 0) {
        cout << "Error: El peso no es valido.\n";
    } else {
        total = 5000 + (peso * 2000) + (dist * 100);

        if (zona == 2) {
            total = total + 10000; // Recargo fijo nacional en vez de porcentajes raros
        }

        if (fragil == 1) {
            total = total + 5000; // Recargo fijo por fragil
        }

        cout << "El costo total del envio es: " << total << "\n";
    }

    return 0;
}