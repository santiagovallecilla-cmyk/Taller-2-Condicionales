#include <iostream>

using namespace std;

int main() {
    double valor, horas, extra, total;
    
    cout << "Digite el valor de la hora: ";
    cin >> valor;
    cout << "Digite las horas trabajadas: ";
    cin >> horas;

    if (horas <= 40) {
        total = horas * valor;
        cout << "Trabajo normal. Total a pagar: " << total << endl;
    } else {
        extra = horas - 40;
        total = (40 * valor) + (extra * valor * 1.5);
        cout << "Tiene " << extra << " horas extras." << endl;
        cout << "Total con horas extras: " << total << endl;
    }

    // Un descuento sencillo que cualquiera pondría
    if (total > 1500000) {
        total = total - (total * 0.05);
        cout << "Se aplicó descuento. Neto: " << total << endl;
    }

    return 0;
}