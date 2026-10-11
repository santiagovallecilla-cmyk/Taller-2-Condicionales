#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese el lado 1: ";
    cin >> a;
    cout << "Ingrese el lado 2: ";
    cin >> b;
    cout << "Ingrese el lado 3: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Error: Los lados deben ser mayores que cero." << endl;
    } else if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "Error: No cumplen con la desigualdad triangular." << endl;
    } else {
        double perimetro = a + b + c;
        cout << "Perimetro: " << perimetro << endl;

        if (a == b && b == c) {
            cout << "El triangulo es Equilatero." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "El triangulo es Isosceles." << endl;
        } else {
            cout << "El triangulo es Escaleno." << endl;
        }
    }

    return 0;
}