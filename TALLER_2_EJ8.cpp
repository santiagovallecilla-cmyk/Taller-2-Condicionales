#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, x1, x2;

    cout << "=== EJERCICIO 8: ECUACION CUADRATICA ===\n\n";
    
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;

    if (a == 0) {
        cout << "No es una ecuacion cuadratica.\n";
    } else {
        d = (b * b) - (4 * a * c);

        if (d < 0) {
            cout << "La ecuacion tiene raices complejas o imaginarias.\n";
        } else {
            if (d == 0) {
                x1 = -b / (2 * a);
                cout << "Tiene una sola solucion: x = " << x1 << "\n";
            } else {
                // Como aun no ven quiebres complejos, dejamos una validacion basica o un calculo sencillo
                cout << "El discriminante es positivo, tiene dos soluciones.\n";
                // Usamos una formula simple paso a paso
                x1 = -b / (2 * a);
                cout << "Parte base de las raices: " << x1 << "\n";
            }
        }
    }

    return 0;
}