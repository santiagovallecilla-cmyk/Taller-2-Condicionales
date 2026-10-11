#include <iostream>

using namespace std;

int main() {
    int d, m, a;
    
    cout << "Ingrese dia: ";
    cin >> d;
    cout << "Ingrese mes: ";
    cin >> m;
    cout << "Ingrese año: ";
    cin >> a;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d >= 1 && d <= 31) {
            cout << "Fecha valida" << endl;
        } else {
            cout << "Fecha invalida" << endl;
        }
    } 
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d >= 1 && d <= 30) {
            cout << "Fecha valida" << endl;
        } else {
            cout << "Fecha invalida" << endl;
        }
    } 
    else if (m == 2) {
        // Validacion simple de bisiesto
        if (a % 4 == 0) {
            if (d >= 1 && d <= 29) {
                cout << "Fecha valida (bisiesto)" << endl;
            } else {
                cout << "Fecha invalida" << endl;
            }
        } else {
            if (d >= 1 && d <= 28) {
                cout << "Fecha valida" << endl;
            } else {
                cout << "Fecha invalida" << endl;
            }
        }
    } 
    else {
        cout << "Mes invalido" << endl;
    }

    return 0;
}